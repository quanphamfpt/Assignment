#include <stdio.h>
#include <conio.h>

int main(){
    
    int a,b;
    int max,LCM,GCD;

    printf("Input A: ");
    scanf("%d",&a);
    printf("Input B: ");
    scanf("%d",&b);

    max = (a > b) ? a : b;

    for (int i=1;i<=max;i++){
        if(a % i == 0 && b % i == 0){
            GCD = i;
        }
    }

    for (int i=max;i>=1;i--){
        if(i % a == 0 && i % b == 0){
            LCM = i;
        }
    }

    printf("GCD(%d,%d) = %d\n",a,b,GCD);
    printf("LCM(%d,%d) = %d\n",a,b,LCM);
    getch();
    return 0;
}