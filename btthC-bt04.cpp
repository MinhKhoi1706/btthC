#include <stdio.h>

int number;

int main() {

    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &number);
    printf("Cac uoc cua %d la: ", number);

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i); 
        }
    }

    printf("\n", number);
    return 0;
}

