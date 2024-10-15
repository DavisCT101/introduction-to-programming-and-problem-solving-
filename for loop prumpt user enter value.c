/*Name:Mucheke Davis Mwangi
Ref No: CT101/G/22766/24
WHILE prompt user to enter the value*/
#include <stdio.h>
int main(){
	int start, stop, sum=0,i=start;
	printf("enter the value when to start:");
     scanf("%d",&start);

    printf("enter the value when to stop:");
     scanf("%d",&stop);
     for(i=start;i<=stop;i++){
     printf("%d\n",i);
     sum+=i;
	 }
	 printf("the sum is:%d",sum);
	 return 0;
}
