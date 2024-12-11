/*Ref Number: CT101/G/22766/24
Name:Mucheke Davis Mwangi
To find if the number entered is even or odd
*/
#include <stdio.h>
void isit_even(int num){
	if(num %2==0){
	printf("The inputted number:%d is even",num);
    }else{
		printf("The inputted number %d is odd number",num);
	}
}
int main(){
	int num;
printf("enter the value to test: ");
scanf("%d",&num);

isit_even(num);
return 0;

}		
	
