/*Ref No. CT101/G/22766/24
Name:Mucheke Davis Mwangi
do while loop*/
#include <stdio.h>

int main (){
	int sum=0,stop,start;
	printf("enter the value when to start:");
	scanf("%d",&start);
	
	printf("enter value when to stop:");
	scanf("%d",&stop);
	int i=start;
	do{
		printf("%d\n",i);
		sum+=i;
		i++;
	
	}
	while(i<=stop);
	printf("the sum is:%d",sum);
	return 0;
	}
