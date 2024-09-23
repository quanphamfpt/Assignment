#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void inputArrayExtend(int **p, int *n) {
    int maxSize = 2;
    char input[10]; 
    int number;
    *p = (int*)malloc(maxSize * sizeof(int));

    if (*p == NULL) {
        printf("Cap bo nho that bai!\n");
        exit(1);
    }

    while (1) {
        scanf("%s", input);
        if (input[0] == '@') {  
            printf("Chuong trinh ket thuc!\n");
            break;
        }
    
        if (input[0] == ' ' || input[0] == '\n') {
            continue;
        }
    
        number = atoi(input);

        if (number < 0 || number >= 10 ){
            continue;
        }
         
        if ((*n) == maxSize) {
            maxSize *= 2;
            int *q = (int*)realloc(*p, maxSize * sizeof(int));
            if (q == NULL) {
                printf("Cap bo nho that bai!\n");
                free(*p); 
                exit(1);
            }
            *p = q; 
        }
        (*p)[*n] = number;  
        (*n)++;
    }
}

void printArray(int *p, int n) {
    printf("Cac so nguyen da nhap la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
}

int main() {
    int *p = NULL;
    int n = 0;
    inputArrayExtend(&p, &n);  // truyền tham chiếu để thay đổi mảng p
    printArray(p, n);
   
    free(p); 
    getch();
    return 0;
}
