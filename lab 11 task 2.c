#include<stdio.h>
#include<string.h>

struct Movie{
    char title[50];
    char genre[30];
    char director[50];
    int year;
    float rating;
};

int main(){
    struct Movie m[5];
    int i, n;

    printf("How many movies you want to add");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter Movie %d details:\n", i+1);

        printf("Title:");
        scanf("%s", m[i].title);

        printf("Genre:");
        scanf("%s", m[i].genre);

        printf("Director:");
        scanf("%s", m[i].director);

        printf("Release Year:");
        scanf("%d", &m[i].year);

        printf("Rating:");
        scanf("%f", &m[i].rating);
    }

    char search[30];
    printf("\nEnter genre to search:");
    scanf("%s", search);

    printf("\nMovies in %s genre:\n", search);
    for(i = 0; i < n; i++) {
        if(strcmp(m[i].genre, search) == 0){
            printf("%s (%d) - Rating: %.1f\n", m[i].title, m[i].year, m[i].rating);
        }
    }

    printf("\nAll Movies:\n");
    for(i = 0; i < n; i++) {
        printf("\nTitle: %s\n", m[i].title);
        printf("Genre: %s\n", m[i].genre);
        printf("Director: %s\n", m[i].director);
        printf("Year: %d\n", m[i].year);
        printf("Rating: %.1f\n", m[i].rating);
    }

    return 0;
}