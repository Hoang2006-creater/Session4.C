#include<stdio.h> 
int main() {
	// Khai bao bien num1, num2, num3 
	int num1, num2, num3;
	// MOi ban nhap 3 so nguyen 
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);

    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    printf("Nhap so thu ba: ");
    scanf("%d", &num3);
	
    // Kiem tra so thu 3 co nam giua so thu 2 va so thu 1 hay khong? 
    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        printf("So thu ba (%d) nam trong khoang giua %d và %d.\n", num3, num1, num2);
    } else {
        printf("So thu ba (%d) không nam trong khoang giua %d và %d.\n", num3, num1, num2);
    }

    return 0;
}

