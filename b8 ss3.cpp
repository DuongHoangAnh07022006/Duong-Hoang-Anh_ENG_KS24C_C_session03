#include <stdio.h>

int main() {
    int number, cs1, cs2, cs3, cs4, reversed;
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &number);
    }
    cs1 = number / 1000;         
    cs2 = (number / 100) % 10;    
    cs3 = (number / 10) % 10;     
    cs4 = number % 10;            
    reversed = cs4 * 1000 + cs3 * 100 + cs2 * 10 + cs1;
    printf("So nghich dao cua %d la: %d\n", number, reversed);

    return 0;
}

