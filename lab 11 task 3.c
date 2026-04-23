#include<stdio.h>

int factorial(int n){
    int i, fact = 1;

    for(i = 1; i <= n; i++){
        fact *= i;
    }

    return fact;
}

int main(){
    int years;
    float baseBonus;

    printf("Enter years of service:");
    scanf("%d", &years);

    printf("Enter base bonus:");
    scanf("%f", &baseBonus);

    int factor = factorial(years);
    float totalBonus = baseBonus * factor;

    printf("Bonus Factor: %d\n", factor);
    printf("Total Bonus: %.2f\n", totalBonus);

    return 0;
}