#include<stdio.h>

struct Student{
    int roll;
};

int search(struct Student s[], int n, int key){
    if(n == 0)
        return -1;
    if(s[n-1].roll == key)
        return n-1;
    return search(s, n-1, key);
}

int main(){
    struct Student s[10];
    int n, i, key, result;

    printf("Enter number of students:");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter roll of student %d: ", i + 1);
        scanf("%d", &s[i].roll);
    }

    printf("Enter roll to search:");
    scanf("%d", &key);

    result = search(s, n, key);

    if(result != -1)
        printf("Found at index %d\n", result);
    else
        printf("Not found\n");

    return 0;
}