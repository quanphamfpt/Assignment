#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void inputArray(int *a,int n){
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }
}

void arrangeArray(int *a,int n){

    int *chan,*le;
    int iChan = 0,iLe = 0;

    chan = (int*)malloc(n*sizeof(int));
    le = (int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            chan[iChan++]=a[i];
        } else {
            le[iLe++]=a[i];
        }
    }
    int k = 0,i = 0,j = 0;
    int check = 1; // Bat dau bang so le
    while(j<iLe && i<iChan){ // Kiem tra so chan sao voi so le cua nhau, se dung lai khi j < Le dau tien
        if(check==1){
            a[k++]=le[i++];
        } else {
            a[k++]=chan[j++];
        }
        check = !check;
    }

    while(j<iChan){ // Them cac so chan con lai trc vi` sau khi 'j<iLe' thi` so cuối cùng là số lẻ
        a[k++]=chan[j++];
    }

    while(i<iLe){   // Them cac so le con lai
        a[k++]=le[i++];
    }
    
    free(chan);
    free(le);
}

void bubbleSort(int *a,int n){
    int i, j ,temp;
    for (i = (n-1); i >= 0; i--) {
        for (j = 1; j <= i; j++){
            if (a[j-1] > a[j]){
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main(){

    int n,m;
    int *n1,*m1;

    do {
        printf("Nhap n (0-2020): ");
        scanf("%d", &n);
        if (n < 0 || n > 2020) {
            printf("Gia tri n khong hop le! Vui long nhap lai.\n");
        }
    } while (n < 0 || n > 2020);

    do {
        printf("Nhap m (0-2020): ");
        scanf("%d", &m);
        if (m < 0 || m > 2020) {
            printf("Gia tri m khong hop le! Vui long nhap lai.\n");
        }
    } while (m < 0 || m > 2020);

    n1 = (int*)malloc(n*sizeof(int));
    m1 = (int*)malloc(m*sizeof(int));

    if (n1 == NULL || m1 == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }

    inputArray(n1,n);
    inputArray(m1,m);
    
    int *s = (int*)realloc(n1,(m+n)*sizeof(int));

    if (s == NULL) {
        printf("Khong the cap phat bo nho cho mang moi.\n");
        free(n1);
        free(m1);
        return 1;
    }

    for (int i = 0; i < m; i++) {
        s[n + i] = m1[i];
    }

    bubbleSort(s,(n+m));
    arrangeArray(s,(n+m));

    printf("Mang da noi: ");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", s[i]);
    }

    
    free(s);
    free(m1);
    getch();
    return 0;
}