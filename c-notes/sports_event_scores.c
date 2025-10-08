// CH.SC.U4CSE24130
// Program Name: In a sports event, 6 players participate in 4 games. Write a C program to: - Use a 2D array to store scores of each player for each game. - Use a 1D array to store the total score of each player. - Display: - Player-wise scores - Total score of each player - Player with the highest total score

#include <stdio.h>

#define NUM_PLAYERS 6
#define NUM_GAMES 4

int main(){
printf("CH.SC.U4CSE24130\n");

    int player_scores[NUM_PLAYERS][NUM_GAMES]; // 2D array to store scores of each player for each game
    int total_player_scores[NUM_PLAYERS];       // 1D array to store the total score of each player

    // Get input for player scores
    printf("Enter scores for %d players across %d games:\n", NUM_PLAYERS, NUM_GAMES);
    for (int i = 0; i < NUM_PLAYERS; i++) {
        printf("\nPlayer %d:\n", i + 1);
        total_player_scores[i] = 0; // Initialize total score for current player
        for (int j = 0; j < NUM_GAMES; j++) {
            printf("  Game %d score: ", j + 1);
            scanf("%d", &player_scores[i][j]);
            total_player_scores[i] += player_scores[i][j]; // Add to player's total score
        }
    }

    // Display Player-wise scores
    printf("\n--- Player-wise Scores ---\n");
    for (int i = 0; i < NUM_PLAYERS; i++) {
        printf("Player %d: ", i + 1);
        for (int j = 0; j < NUM_GAMES; j++) {
            printf("Game %d = %d ", j + 1, player_scores[i][j]);
        }
        printf("\n");
    }

    // Display Total score of each player
    printf("\n--- Total Score of Each Player ---\n");
    for (int i = 0; i < NUM_PLAYERS; i++) {
        printf("Player %d Total Score: %d\n", i + 1, total_player_scores[i]);
    }

    // Find and display the Player with the highest total score
    int topper_player_index = 0;
    int highest_total_score = total_player_scores[0];

    for (int i = 1; i < NUM_PLAYERS; i++) {
        if (total_player_scores[i] > highest_total_score) {
            highest_total_score = total_player_scores[i];
            topper_player_index = i;
        }
    }

    printf("\n--- Player with the Highest Total Score ---\n");
    printf("Player %d has the highest total score: %d\n", topper_player_index + 1, highest_total_score);

    return 0;
}

