//  Copyright
#ifndef __ROOM_H  // NOLINT

#define __ROOM_H

#include"main.h"
#include"customer.h"

class Room{
 public:
     char type;
     char stype;
     char ac;
     int roomNumber;
     int rent;
     int status;

class Customer cust;
class Room addRoom(int);
void searchRoom(int);
void deleteRoom(int);
void displayRoom(Room);
};

class Room rooms[max];
int count = 0;

#endif  // 3_IMPLEMENTATION_INC_ROOM_H_

