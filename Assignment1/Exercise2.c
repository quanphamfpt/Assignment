#include <stdio.h>
#include <conio.h>

void main(void){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Before: a = %d, b = %d\n",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After: a = %d, b = %d\n",a,b);
    getch();
}