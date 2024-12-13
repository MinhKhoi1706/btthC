#include <stdio.h>

int check_prime_numbers(int n) {
    if (n < 2) {    
		return 0;
	}
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int n;
    
    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &n);
    
    if (check_prime_numbers(n)) {
        printf("%d la so nguyen to\n", n);
    } else {
        printf("%d khong phai la so nguyen to\n", n);
    }
    
    return 0;
}

