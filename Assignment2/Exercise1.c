#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    int n;
    printf("Nhap n: ");
    scanf("%d",&n);

    int *arr = (int*)malloc(n*sizeof(int));

    if(arr == NULL){
        printf("Cap bo nho that bai!\n");
        return 1; 
    }

    printf("Nhap mang: ");
    for(int i = 0; i<n ; i++){
        scanf("%d",arr+i);
    }

    for(int j = 0; j<n ; j++){
        printf("%d ",*(arr+j));
    }

    free(arr);
    getch();

    return 0;
}