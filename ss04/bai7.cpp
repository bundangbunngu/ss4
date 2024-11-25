#include <stdio.h>
int main(){
	int nam;
	
	printf("nhap nam\n");
	scanf("%d", &nam);
	
	if ((nam % 4 == 0 && nam % 100 != 0) || ( nam % 400 == 0)){
		printf("%d la nam nhuan", nam);
	} else {
		printf("%d ko phai nam nhuan", nam);
	}
	return 0;
} 
