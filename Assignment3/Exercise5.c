#include <stdio.h>
#include <conio.h>


void input(double  *value,char *c){
    printf("%s", c);
    scanf("%lf", value);
}

int main(){
    
    double a,b,x,y;

    printf("First order equation: ax+b=y\n");
    input(&a,"Input a: ");
    input(&b,"Input b: ");
    input(&y,"Input y: ");

    if(a!=0){
        x = (y-b)/a;
        printf("The value of x: %.2lf",x);
    } else{
        printf("a must not be zero!");
    }
    getch();
    return 0;
}