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

long long fibonacci1(long long n){
    if(n==0) 
        return 0;
    else if(n==1) 
        return 1;
    else
        return fibonacci1(n-1) + fibonacci1(n-2);
}

int main(){
    int n = 100;
    printf("First 100 Fibonacci number: \n");
    for(long long i=1;i<=n;i++){
        printf("%lld\n",fibonacci(i));
    }
    getch();
    return 0;
}