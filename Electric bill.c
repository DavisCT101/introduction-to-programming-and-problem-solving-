/*Ref No :CT101/G/22766/24
Name :Mucheke Davis Mwangi
electric bill calculator*/
#include <stdio.h>
#include <math.h>
 int main () {
	int customerId;
	 char customerName[50];
	 float unitConsumed,totalBill,charges;
	 //to prompt the user to enter customer id, customer name, and the unit price
	 printf("enter the customer id:");
	 scanf("%d",&customerId);
	 
	 printf("Enter the customer name :");
	 scanf("%s",&customerName);
	 
	 printf("Enter the unit price :");
	 scanf("%f",&unitConsumed);
	 
	 if(unitConsumed<=199){
		charges=1.20; 
	 }
	 else if(unitConsumed<400){
		 charges=1.50;
	 }
	 else if (unitConsumed<600){
	 charges=1.80;	 
	 }
	 else {charges=2.00;
	 }
 totalBill=unitConsumed*charges;
 //the surcharge fee is 15% of total bill if unit consumed exceed Ksh.400
 if(totalBill>400){
 	totalBill+=totalBill*0.15;
 }
 if (totalBill<100){
 	totalBill=100;
 }
 //to output the following
 printf("Customer id is:%d\n",customerId);
 printf("Customer name is :%s\n",customerName);
 printf("UnitConsumed is :%.1f\n",unitConsumed);
 printf("Charges per unit is:%.2f\n",charges);
 printf("Total charge paid is :Ksh.%.2f\n",totalBill);
 
 return 0;
 }
 
