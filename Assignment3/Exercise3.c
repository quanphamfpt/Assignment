#include <stdio.h>
#include <conio.h>

int main(){

    int n;
    printf("Input n: ");
    scanf("%d",&n);

    if (n % 2 == 0){
        printf("N is an even number!");
    } else {
        printf("N is an odd number!");
    }
    getch();
    return 0;
}