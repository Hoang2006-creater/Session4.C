#include<stdio.h>
int main(){
    // khai bao bien number
	int number;
	// Moi nguoi dung nhap so
	printf("Moi ban nhap mot so nguyen: ");
	scanf("%d", &number);
	// Kiem tra so am hay duong 
	if (number>0){
	   printf("So %d l� so duong.\n", number);    
	} else if (number<0){
		printf("So %d l� so am.\n", number);	
    } else {
	 printf("So ban nhap l� so 0.\n");
}
    
    return 0;
}
