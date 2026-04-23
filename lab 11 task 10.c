#include<stdio.h>

struct Address{
    char city[50];
    char country[50];
};

struct Person{
    char name[50];
    struct Address addr;
};

int main(){
    struct Person p;

    printf("Enter name:");
    scanf("%s", p.name);

    printf("Enter city:");
    scanf("%s", p.addr.city);

    printf("Enter country:");
    scanf("%s", p.addr.country);

    printf("Details:\n");
    printf("Name:%s\n", p.name);
    printf("City:%s\n", p.addr.city);
    printf("Country:%s\n", p.addr.country);

    return 0;
}