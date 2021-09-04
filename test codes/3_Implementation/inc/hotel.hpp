#ifndef __HOTEL_H__
#define __HOTEL_H__

#include<iostream>
#include<string.h>
#include<conio.h>

#define max 100
using namespace std;


Room Room::addRoom(int rno)

void Room::searchRoom(int rno)

void Room::displayRoom(Room tempRoom)

void HotelMgnt::guestSummaryReport()

void HotelMgnt::checkIn()

void HotelMgnt::getAvailRoom()

void HotelMgnt::searchCustomer(char *pname)

void HotelMgnt::checkOut(int roomNum)

void manageRooms()



//Class Customer
class Customer
{
public:
char name[100];
char address[100];
char phone[12];
char from_date[20];
char to_date[20];
float payment_advance;
int booking_id;
};


class Room
{
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

//Global Declarations
class Room rooms[max];
int count=0;

#endif
