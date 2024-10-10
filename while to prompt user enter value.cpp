/*Name:Davis Mwangi Mucheke
Ref No:CT101/G/22766/24
WHILE TO PROMPT USER TO ENTER THE VALUES
*/
#include <stdio.h>
int main (){
int sum=0,stop,start;
printf("enter the value when to start:");
scanf("%d",&start);

printf("enter the value when to stop:");
scanf("%d",&stop);
int i=start;
while (i<=stop){
	printf("%d",i);
	sum+=i;
	i++;
}
printf("the sum is:%d",sum);
return 0;
}
