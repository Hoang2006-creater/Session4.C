#include<stdio.h>
int main(){
    // khai bao bien number
	int number;
	// Moi nguoi dung nhap so
	printf("Moi ban nhap mot so nguyen: ");
	scanf("%d", &number);
	// Kiem tra so le hay chan 
	if (number % 3 == 0 && number % 5 == 0  ){
	   printf("So %d là so chia het cho ca 5 vs 3.\n", number);    
	} else if (number % 3 == 0){
		printf("So %d là so chia het cho 3.\n", number);
			} else if (number % 5 == 0) {
		printf("So %d là so chia het cho 5.\n", number);
         }else {
        printf("So %d không chia het cho 3 và 5.\n", number);
    }
				
    
    return 0;
}
