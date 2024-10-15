/*Name:Mucheke Davis Mwangi 
Ref No: CT101/G/22766/24
2 D for loop array*/
#include <stdio.h>
int main(){
	int i,j;
	int marks[2][3]= {
		{10,20,30},{40,50,60},
		};
	for(i=0;i<2;i++){
			for(j=0;j<3;j++){
				printf("marks[%d][%d] %d\n",i,j,marks[i][j]);
			}
		}
	return 0;
}