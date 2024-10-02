/*Ref No:CT101/G/22766/24
Name:Mucheke Davis Mwangi
Date 1/10/2024
to calculate if a person is eligible for a loan*/

#include <stdio.h>
int main()
{
int age;
float income;
//prompt the user to enter the age and the amount of income

printf("Enter the age:");
scanf("%d",&age);

printf("enter the amount of income");
scanf("%f",&income);

if(age>=21&&income>=21000)
    {
printf("Congratulation you qualify for the loan");
}
else{
printf("unfortunately,we are unable to offer you a loan at this time");
}
return 0;
}
