#ifndef __CUSTOMER_H
#define __CUSTOMER_H
#include<iostream>
#include<string>
#include"room.h"
#include"main.h"

#define max 100
using namespace std;
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

class HotelMgnt:protected Room
{
public:
 void checkIn();
 void getAvailRoom();
 void searchCustomer(char *);
 void checkOut(int);
 void guestSummaryReport();
};

#endif