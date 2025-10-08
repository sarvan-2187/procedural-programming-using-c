// CH.SC.U4CSE24130
// Program Name: A multiplex wants to record ratings given by 4 viewers for 3 movies. Use a 2D array to store ratings (out of 10). Use a 1D array to store the average rating of each movie. Display: Ratings given by each viewer Average rating of each movie Movie with the highest average rating.

#include <stdio.h>

#define NUM_VIEWERS 4
#define NUM_MOVIES 3

int main(){
printf("CH.SC.U4CSE24130\n");

    int ratings[NUM_VIEWERS][NUM_MOVIES]; // Store ratings (out of 10)
    float movie_avg_ratings[NUM_MOVIES];  // Store average rating for each movie

    // Get ratings from users
    printf("Enter ratings (out of 10) for %d viewers and %d movies:\n", NUM_VIEWERS, NUM_MOVIES);
    for (int i = 0; i < NUM_VIEWERS; i++) {
        printf("\nViewer %d:\n", i + 1);
        for (int j = 0; j < NUM_MOVIES; j++) {
            printf("  Movie %d rating: ", j + 1);
            scanf("%d", &ratings[i][j]);
            // Input validation (optional but good practice)
            if (ratings[i][j] < 0 || ratings[i][j] > 10) {
                printf("Rating must be between 0 and 10. Please re-enter.\n");
                j--; // Decrement j to re-enter the same movie rating
            }
        }
    }

    // Calculate average rating for each movie
    for (int j = 0; j < NUM_MOVIES; j++) {
        int sum_ratings = 0;
        for (int i = 0; i < NUM_VIEWERS; i++) {
            sum_ratings += ratings[i][j];
        }
        movie_avg_ratings[j] = (float)sum_ratings / NUM_VIEWERS;
    }

    // Display ratings given by each viewer
    printf("\n--- Ratings Given by Each Viewer ---\n");
    for (int i = 0; i < NUM_VIEWERS; i++) {
        printf("Viewer %d: ", i + 1);
        for (int j = 0; j < NUM_MOVIES; j++) {
            printf("Movie %d = %d ", j + 1, ratings[i][j]);
        }
        printf("\n");
    }

    // Display average rating of each movie
    printf("\n--- Average Rating of Each Movie ---\n");
    for (int j = 0; j < NUM_MOVIES; j++) {
        printf("Movie %d Average Rating: %.2f\n", j + 1, movie_avg_ratings[j]);
    }

    // Find and display the movie with the highest average rating
    int highest_rated_movie_index = 0;
    float highest_avg_rating = movie_avg_ratings[0];

    for (int j = 1; j < NUM_MOVIES; j++) {
        if (movie_avg_ratings[j] > highest_avg_rating) {
            highest_avg_rating = movie_avg_ratings[j];
            highest_rated_movie_index = j;
        }
    }

    printf("\n--- Movie with the Highest Average Rating ---\n");
    printf("Movie %d has the highest average rating: %.2f\n", highest_rated_movie_index + 1, highest_avg_rating);

    return 0;
}

