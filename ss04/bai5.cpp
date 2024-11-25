#include <stdio.h>
int main(){
	int num1, num2, num3;
	
	printf("nhap so thu nhat\n");
	scanf("%d",&num1);
	printf("nhap so thu hai\n");
	scanf("%d",&num2);
	printf("nhap so thu ba\n");
	scanf("%d",&num3);
	
	if(num3 < num2 && num3 > num1 || num3 > num2 && num3 < num1){
		printf("so thu 3 nam giua khoang so thu 2 va 1");
		
	} else{
		printf ("ko nam giua");
		
	}
	return 0;
}
