#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    int num,deno; 
    printf("Input numerator: ");
    scanf("%d",&num);
    printf("Input denominator: ");
    scanf("%d",&deno);

    printf("Quotient = %d\n",(num/deno));
    printf("Remainder = %d\n",(num%deno));
    getch();
    return 0;
}