#Target_name : Dependencies
#<TAB>Command

# Name of the Project
PROJ_NAME = HotelManagementSystem
TEST_PROJ_NAME = Test_$(PROJ_NAME)

# Output directory
BUILD = build

CC = g++

#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   MOVE = move
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# Main file name
MAIN_NAME = main.cpp

# All source code files
SRC = src/customer.cpp\
src/room.cpp


# All test source files
TEST_SRC = test/test.cpp\



# All include folders with header files
INC = -Iinc\
-Iunity\

$(PROJT_NAME): all

CFLAGS = -I$(INC)

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY: all test coverage run clean doc

all:$(SRC) $(BUILD)
	g++ $(MAIN_NAME) $(SRC) $(INC) -o $(call FixPath,$(BUILD)/$(PROJT_NAME).$(EXEC)) -lm

run: $(PROJT_NAME)
	$(call FixPath,$(BUILD)/$(PROJT_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC) $(BUILD)
	g++ $(SRC) $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD)/$(TEST_PROJT_NAME).$(EXEC)) -lm
	$(call FixPath,$(BUILD)/$(TEST_PROJT_NAME).$(EXEC))

coverage:${PROJECT_NAME} $(BUILD)
	g++ -fprofile-arcs -ftest-coverage $(SRC) $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD)/$(TEST_PROJT_NAME).$(EXEC))
	$(call FixPath,$(BUILD)/$(TEST_PROJT_NAME).$(EXEC))
	$(MOVE) *.gcno src
	$(MOVE) *.gcda src
	gcov -a $(SRC)
	$(RM) $(call FixPath,*.gcda)
	$(RM) $(call FixPath,*.gcno)

doc:
	make -C documentation

cppcheck:
	cppcheck --enable=all $(CPPCHECK_INC) *.c

clean:
	$(RM) $(call FixPath,$(BUILD)/*)
	make clean -C doc
	rmdir $(BUILD) doc/html

$(BUILD):
	mkdir build

valgrind_main: all
	valgrind $(call FixPath,$(BUILD)/$(PROJT_NAME).$(EXEC))

valgrind_test: $(SRC) $(TEST_SRC) $(BUILD)
	g++ $(SRC) $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD)/$(TEST_PROJT_NAME).$(EXEC)) -lm
	valgrind ./$(call FixPath,$(BUILD)/$(TEST_PROJT_NAME).$(EXEC))