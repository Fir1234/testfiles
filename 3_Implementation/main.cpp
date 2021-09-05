// Copyright
#include <iostream>
#include <string>
#include"customer.h"  // NOLINT
#include"room.h"  // NOLINT
#include"main.h"  // NOLINT


int main() {
class HotelMgnt hm;
int i, j, opt, rno;
char ch;
char pname[100];

system("cls");

do {
system("cls");
cout  << "######## Hotel Management #########\n";
cout  << "\n1. Manage Rooms";
cout  << "\n2. Check-In Room";
cout  << "\n3. Available Rooms";
cout  << "\n4. Search Customer";
cout  << "\n5. Check-Out Room";
cout  << "\n6. Guest Summary Report";
cout  << "\n7. Exit";
cout  << "\n\nEnter Option: ";
cin >> opt;

switch(opt) {
case 1:
manageRooms();
break;
case 2:
if(count == 0) {
cout  << "\nRooms data is not available.\nPlease add the rooms first.";
getch();
} else
hm.checkIn();
break;
case 3:
if(count  ==  0) {
cout  << "\nRooms data is not available.\nPlease add the rooms first.";
getch();
} else
hm.getAvailRoom();
break;
case 4:
if(count == 0) {
cout  << "\nRooms are not available.\nPlease add the rooms first.";
getch();
} else {
cout  << "Enter Customer Name: ";
cin  >>  pname;
hm.searchCustomer(pname);
}
break;
case 5:
if(count == 0) {
cout  << "\nRooms are not available.\nPlease add the rooms first.";
getch();
} else {
cout  << "Enter Room Number : ";
cin  >> rno;
hm.checkOut(rno);
}
break;
case 6:
hm.guestSummaryReport();
break;
case 7:
cout  << "\nTHANK YOU! FOR USING SOFTWARE";
break;
default:
cout  << "\nPlease Enter correct option";
break;
}
}while(opt! = 7);

getch();
}
