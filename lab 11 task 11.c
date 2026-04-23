#include<stdio.h>

struct Student{
    char name[50];
    int roll;
    float marks;
};

int main(){
    struct Student s[10];
    int n, i;
    float sum = 0, avg;

    printf("Enter number of students:");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name:");
        scanf("%s", s[i].name);

        printf("Roll:");
        scanf("%d", &s[i].roll);

        printf("Marks:");
        scanf("%f", &s[i].marks);

        sum += s[i].marks;
    }

    avg = sum / n;

    printf("Average marks: %.2f\n", avg);

    return 0;
}