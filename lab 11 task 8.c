#include<stdio.h>

struct Employee{
    char name[50];
    int id;
    float salary;
};

int main(){
    struct Employee e[10];
    int n, i, maxIndex = 0;

    printf("Enter number of employees:");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter details of employee %d\n", i + 1);

        printf("Name:");
        scanf("%s", e[i].name);

        printf("ID:");
        scanf("%d", &e[i].id);

        printf("Salary:");
        scanf("%f", &e[i].salary);
    }

    for(i = 1; i < n; i++){
        if(e[i].salary > e[maxIndex].salary){
            maxIndex = i;
        }
    }

    printf("Highest Paid Employee:\n");
    printf("Name: %s\n", e[maxIndex].name);
    printf("ID: %d\n", e[maxIndex].id);
    printf("Salary: %.2f\n", e[maxIndex].salary);

    return 0;
}