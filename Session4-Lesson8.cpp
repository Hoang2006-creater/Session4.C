#include<stdio.h> 
int main() {
	// Khai bao 3 bien a, b, c la 3 canh cua tam giac 
	int a, b, c;
	// Moi ban nhap 3 canh tam giac 
    printf("Nhap canh thu nhat: ");
    scanf("%d", &a);

    printf("Nhap canh thu hai: ");
    scanf("%d", &b);

    printf("Nhap canh thu ba: ");
    scanf("%d", &c);

     // Kiem tra 3 canh co thanh tam giac khong? 
    if (a +b > c && a +c > b && b + c > a ) {
        printf("3 canh co the tao thanh tam giac.\n", a, b, c);
    } else {
        printf("3 canh khong the tao thanh tam giac.\n", a, b, c);
    }

    return 0;
}
