#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    int n;
    do{
        printf("Input n: ");
        scanf("%d",&n);
        if(n < 1 || n > 10000){
            printf("Try again n(1-10000: )");
        } 
    } while (n < 1 || n > 10000);

    if(n == 1){
        printf("N is not a prime number!");
        getch();
        return 0;
    }

    for(int i = 2;i<=sqrt(n);i++){
        if(n % i == 0){
            printf("N is not a prime number!");
            getch();
            return 0;

        }
    }
    printf("N is a prime number!");
    getch();
    return 1;
}