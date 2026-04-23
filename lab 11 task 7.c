#include<stdio.h>

struct Student{
    char name[50];
    int roll;
    float marks;
};

int main(){
    struct Student s[10];
    int n, i;

    printf("Enter number of students:");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name:");
        scanf("%s", s[i].name);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Marks:");
        scanf("%f", &s[i].marks);
    }

    printf("Student Records:\n");

    for(i = 0; i < n; i++){
        printf("Name: %s\n", s[i].name);
        printf("Roll: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}