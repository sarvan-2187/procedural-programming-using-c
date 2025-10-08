CH.SC.U4CSE24130
// Program Name: Cricket Team Scorecard

#include <stdio.h>

#define NUM_MATCHES 5
#define NUM_PLAYERS 11

int main(){
printf("CH.SC.U4CSE24130\n");

    int player_scores[NUM_MATCHES][NUM_PLAYERS]; // 2D array to store player scores for each match
    int match_total_scores[NUM_MATCHES];         // 1D array to store total score of each match

    // Get player scores for each match
    printf("Enter scores for %d players in %d matches:\n", NUM_PLAYERS, NUM_MATCHES);
    for (int i = 0; i < NUM_MATCHES; i++) {
        printf("\n--- Match %d ---\n", i + 1);
        match_total_scores[i] = 0; // Initialize total score for current match
        for (int j = 0; j < NUM_PLAYERS; j++) {
            printf("  Player %d score: ", j + 1);
            scanf("%d", &player_scores[i][j]);
            match_total_scores[i] += player_scores[i][j]; // Add to match total
        }
    }

    // Display all scores of players match-wise
    printf("\n--- Player Scores Match-wise ---\n");
    for (int i = 0; i < NUM_MATCHES; i++) {
        printf("Match %d Scores: ", i + 1);
        for (int j = 0; j < NUM_PLAYERS; j++) {
            printf("%d ", player_scores[i][j]);
        }
        printf("\n");
    }

    // Display total score for each match
    printf("\n--- Total Score for Each Match ---\n");
    for (int i = 0; i < NUM_MATCHES; i++) {
        printf("Match %d Total Score: %d\n", i + 1, match_total_scores[i]);
    }

    // Find and display the match with the highest total score
    int highest_score = match_total_scores[0];
    int highest_score_match_index = 0;

    for (int i = 1; i < NUM_MATCHES; i++) {
        if (match_total_scores[i] > highest_score) {
            highest_score = match_total_scores[i];
            highest_score_match_index = i;
        }
    }

    printf("\n--- Match with the Highest Total Score ---\n");
    printf("Match %d has the highest total score: %d\n", highest_score_match_index + 1, highest_score);

    return 0;
}

