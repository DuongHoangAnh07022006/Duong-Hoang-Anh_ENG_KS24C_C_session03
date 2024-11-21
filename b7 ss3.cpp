#include <stdio.h>

int main() {
    int number, cs1, cs2, cs3, cs4, sum;
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &number);
    }
    cs1 = number / 1000;         
    cs2 = (number / 100) % 10;    
    cs3 = (number / 10) % 10;     
    cs4 = number % 10;            

    sum = cs1 + cs2 + cs3 + cs4;
    printf("Tong cac chu so trong so %d la: %d\n", number, sum);

    return 0;
}

