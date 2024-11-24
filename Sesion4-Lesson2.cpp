#include<stdio.h>
int main(){
    // khai bao bien number
	int number;
	// Moi nguoi dung nhap so
	printf("Moi ban nhap mot so nguyen: ");
	scanf("%d", &number);
	// Kiem tra so le hay chan 
	if (number % 2 == 0){
	   printf("So %d là so chan.\n", number);    
	} else 
		printf("So %d là so le.\n", number);	
    
    
    return 0;
}
