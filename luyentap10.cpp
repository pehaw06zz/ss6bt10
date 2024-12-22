#include <stdio.h>

int isPrime(int number) {
    if (number < 2) {
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
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    if(isPrime(n)){
    	printf()
	}

    return 0;
}
