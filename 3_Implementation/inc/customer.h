#ifndef __CUSTOMER_H
#define __CUSTOMER_H
#include<iostream>
#include<string>

using namespace std;

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
#endif
