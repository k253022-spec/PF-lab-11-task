#include<stdio.h>

struct Student{
    int marks;
};

int countPass(struct Student s[], int n){
    if(n == 0)
        return 0;
    if(s[n-1].marks >= 40)
        return 1 + countPass(s, n-1);
    else
        return countPass(s, n-1);
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

    printf("Number of passed students: %d\n", countPass(s, n));

    return 0;
}