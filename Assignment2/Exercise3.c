#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char s1[100];
    char s2[100];
    long long d1,d2;

    printf("Nhap chuoi 1: ");
    fgets(s1,100,stdin);
    printf("Nhap chuoi 2: ");
    fgets(s2,100,stdin);

    // Loại bỏ ký tự xuống dòng
    s1[strcspn(s1, "\n")] = 0;
    s2[strcspn(s2, "\n")] = 0;

    if(strcmp(s1,s2)==0){
        printf("2 chuoi bang nhau!");
        getch();
        return 1;
    }

    for (int i = 0; i < strlen(s1); i++) {
        if (s1[i] < '0' || s1[i] > '9') {
            printf("Chuoi S1 ko hop le!\n");
            getch();
            return 1;
        }
    }
    for (int i = 0; i < strlen(s2); i++) {
        if (s2[i] < '0' || s2[i] > '9') {
            printf("Chuoi S2 ko hop le!\n");
            getch();
            return 1;
        }
    }

    d1 = atoll(s1); // Chuyen chuoi sang long long
    d2 = atoll(s2);

    if(d1<d2){
        printf("%lld",d2);
    } else {
        printf("%lld",d1);
    }
    
    getch();
    return 0;
}