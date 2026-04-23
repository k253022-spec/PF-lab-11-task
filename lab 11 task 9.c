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
        printf("Enter details of student %d\n", i + 1);

        printf("Name:");
        scanf("%s", s[i].name);

        printf("Roll number:");
        scanf("%d", &s[i].roll);

        printf("Marks:");
        scanf("%f", &s[i].marks);
    }

    printf("Passed Students:\n");

    for(i = 0; i < n; i++){
        if(s[i].marks >= 40){
            printf("Name: %s\n", s[i].name);
            printf("Roll: %d\n", s[i].roll);
            printf("Marks: %.2f\n", s[i].marks);
        }
    }

    return 0;
}