#include<stdio.h>

int search(int arr[], int n, int key){
    if(n == 0)
        return -1;
    if(arr[n - 1] == key)
        return n - 1;
    return search(arr, n - 1, key);
}

int main(){
    int arr[10], n, i, key, result;

    printf("Enter size:");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter value to search:");
    scanf("%d", &key);

    result = search(arr, n, key);

    if(result != -1)
        printf("Found at index %d\n", result);
    else
        printf("Not found\n");

    return 0;
}