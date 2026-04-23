#include<stdio.h>
#include<string.h>

struct Flight{
    int flightNo;
    char departure[50];
    char destination[50];
    char date[20];
    int seats;
};

int main(){
    struct Flight f;
    int book;

    printf("Enter Flight Number:");
    scanf("%d", &f.flightNo);

    printf("Enter Departure City:");
    scanf("%s", f.departure);

    printf("Enter Destination City:");
    scanf("%s", f.destination);

    printf("Enter Date:");
    scanf("%s", f.date);

    printf("Enter Available Seats:");
    scanf("%d", &f.seats);

    printf("How many seats you want to book? ");
    scanf("%d", &book);

    if(book <= f.seats){
        f.seats -= book;
        printf("Booking successful!\n");
    } else{
        printf("Not enough seats available\n");
    }

    printf("\nFlight Details:\n");
    printf("Flight No: %d\n", f.flightNo);
    printf("From: %s\n", f.departure);
    printf("To: %s\n", f.destination);
    printf("Date: %s\n", f.date);
    printf("Remaining Seats: %d\n", f.seats);

    return 0;
}