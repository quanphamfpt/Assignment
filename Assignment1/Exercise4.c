#include <stdio.h>
#include <conio.h>

int main(void)
{
    char firstName[30];
    char lastName[30];
    int age;
    char gender[10];
    char personalId[15];
    char employeeId[15];

    puts("Enter your first name: ");
    fgets(firstName, sizeof(firstName), stdin);

    puts("Enter your last name: ");
    fgets(lastName, sizeof(lastName), stdin);

    puts("Enter your age: ");
    scanf("%d", &age);
    getchar();

    puts("Enter your gender: ");
    fgets(gender, sizeof(gender), stdin);

    puts("Enter your personal ID: ");
    fgets(personalId, sizeof(personalId), stdin);

    puts("Enter your employee ID: ");
    fgets(employeeId, sizeof(employeeId), stdin);

    printf("\n---- Employee Information ----\n");
    printf("First Name: %s", firstName);
    printf("Last Name: %s", lastName);
    printf("Age: %d\n", age);
    printf("Gender: %s", gender);
    printf("Personal ID: %s", personalId);
    printf("Employee ID: %s", employeeId);

    getch();  
    return 0;  
}
