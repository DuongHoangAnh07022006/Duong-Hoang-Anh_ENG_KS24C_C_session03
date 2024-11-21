#include <stdio.h>
int main(){
	// Step 1: khai bao bien : numb1, numb2, numb3, sum, average
	int numb1, numb2, numb3, sum;
	float average;
	// Step 2: Nhap gia tri numb1, numb2, numb3
	printf("Nhap vao so thu nhat: ");
	scanf("%d", &numb1);
	printf("Nhap vao so thu hai: ");
	scanf("%d", &numb2);
	printf("Nhap vao so thu ba: ");
	scanf("%d", &numb3);
	// Step 3:
	// 3.1: sum of 3 numb
	sum = numb1 + numb2 + numb3;
	// 3.2: average of 3 numb
	average = sum/3;
	// Step 4: Print to screen
		// 4.1 print out 3 entered numbers
	printf("Ba so da nhap lan luot la: %d %d %d\n", numb1, numb2, numb3);
    	// 4.2 Ptint out sum
	printf("Tong ba so la: %d/n", sum);
    	// 4.3 Print out average
	printf("Gia tri trung binh la: %.f", average);
	    // Step 5: Stop
	return 0;
}

