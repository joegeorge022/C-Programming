/*
    Joe George
    CSE- B
    Roll: 40
*/
#include <stdio.h>

typedef struct{
    char name[30];
    int id;
    int salary;
} Employee;

int main(){
    int n;
    printf("Enter the number of employees: ");
    scanf("%d",&n);

    Employee s[n];

    for (int i=0; i < n; i++){
        getchar();
        printf("\nEnter the name of employee-%d: ",i+1);
        scanf("%[^\n]%*c", s[i].name);

        printf("Enter the ID of employee-%d: ",i+1);
        scanf("%d", &s[i].id);

        printf("Enter the salary of employee-%d: ",i+1);
        scanf("%d", &s[i].salary);
    }

    for (int i=0; i<n; i++){
        printf("\n");
        printf("Name: %s\n", s[i].name);
        printf("ID: %d\n", s[i].id);
        printf("Salary: %d\n", s[i].salary);
    }

    return 0;
}
