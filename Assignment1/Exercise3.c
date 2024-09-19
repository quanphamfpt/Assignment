#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,sum,diff;
    printf("Enter a: \n");
    scanf("%d",&a);
    printf("Enter b: \n");
    scanf("%d",&b);
    sum = a + b;
    diff = a - b;
    printf("Sum(%d, %d) = %d\n",a,b,sum);
    printf("Diff(%d, %d) = %d\n",a,b,diff);
    getch();
}