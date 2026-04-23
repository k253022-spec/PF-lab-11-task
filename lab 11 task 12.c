#include<stdio.h>

struct Student{
    int marks;
};

int total(struct Student s[], int n){
    if(n == 0)
        return 0;
    return s[n-1].marks + total(s, n-1);
}

int main(){
    struct Student s[10];
    int n, i;

    printf("Enter number of students:");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &s[i].marks);
    }

    printf("Total marks: %d\n", total(s, n));

    return 0;
}