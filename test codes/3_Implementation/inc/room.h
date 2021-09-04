#ifndef __ROOM_H
#define __ROOM_H
#include<iostream>
#include<string>
using namespace std;

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
#endif
