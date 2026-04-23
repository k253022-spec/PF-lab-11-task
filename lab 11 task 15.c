#include<stdio.h>

struct Student{
    int roll;
};

void display(struct Student s[], int n){
    if(n == 0)
        return;

    display(s, n - 1);
    printf("Roll: %d\n", s[n-1].roll);
}

int main(){
    struct Student s[10];
    int n, i;

    printf("Enter number of students:");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter roll of student %d: ", i + 1);
        scanf("%d", &s[i].roll);
    }

    printf("Student Records:\n");
    display(s, n);

    return 0;
}