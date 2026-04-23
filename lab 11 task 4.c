#include<stdio.h>

int totalSavings(int n, int amount){
    if(n == 0)
        return 0;
    return amount + totalSavings(n - 1, amount);
}

int main(){
    int years, amount;

    printf("Enter number of years:");
    scanf("%d", &years);

    printf("Enter yearly deposit:");
    scanf("%d", &amount);

    int total = totalSavings(years, amount);

    printf("Total savings: %d\n", total);

    return 0;
}