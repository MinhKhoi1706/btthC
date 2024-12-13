#include <stdio.h>

int isPrime(int number) {
    if (number <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong.\n");
        return 1;
    }

    int count = 0;
    int number = 2;

    printf("Cac so nguyen to dau tien la:\n");
    while (count < n) {
        if (isPrime(number)) {
            printf("%d ", number);
            count++;
        }
        number++;
    }

    printf("\n");
    return 0;
}

