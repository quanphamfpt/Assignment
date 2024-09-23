#include <stdio.h>
#include <conio.h>

long long fibonacci(long long n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    long long a = 0, b = 1, c;
    for (long long i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b; 
}

int main(){
        
    long long n;
    printf("Input N: ");
    scanf("%lld",&n);
    printf("%lldth Fibonacci number is %lld",n,fibonacci(n));
    getch();
    return 0;
}