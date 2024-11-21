#include <stdio.h>
int main() {
    const float PI = 3.14;
    float radius;
    printf("Nhap vao ban kinh hinh tron: ");
    scanf("%f", &radius);

    float circumference = 2 * PI * radius;
    float area = PI * radius * radius;

    printf("Ban kinh hinh tron: %.2f\n", radius);   
    printf("Chu vi hinh tron: %.2f\n", circumference);  
    printf("Dien tich hinh tron: %.2f\n", area);      
    return 0;
}

