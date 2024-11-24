#include<stdio.h>
int main(){
    // khai bao bien month 
	int month;
	
    // Nhap so thang tu nguoi dung 
    printf("Moi ban nhap so thang tu 1 den 12: ");
    scanf("%d", &month);

    // Xác dinh ngay trong thang 
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("Thang %d có 31 ngay.\n", month);
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("Thang %d có 30 ngay.\n", month);
    } else if (month == 2) {
        printf("Thang 2 có 28 hoac 29 ngay .\n");
    } else {
        printf("So thang khong hop le");
    }

    return 0;
}
