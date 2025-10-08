// CH.SC.U4CSE24130
// Program Name: Record daily temperature of 7 days at 2 different times( Morning , Afternoon and Evening) Use a 2D array to store temperatures recorded per day at different times. Use a 1D array to store the average temperature for each day. Display: All temperature values recorded day-wise. Average temperature for each day. The day with the highest average temperature.

#include <stdio.h>

#define DAYS 7
#define TIMES 2 // 0 for Morning, 1 for Afternoon/Evening

int main(){
printf("CH.SC.U4CSE24130\n");

    float temperatures[DAYS][TIMES]; // 2D array to store temperatures
    float daily_avg[DAYS];           // 1D array to store average temperature for each day

    // Input temperatures
    printf("Enter temperatures for %d days (Morning and Afternoon/Evening):\n", DAYS);
    for (int i = 0; i < DAYS; i++) {
        printf("\nDay %d:\n", i + 1);
        printf("  Morning temperature: ");
        scanf("%f", &temperatures[i][0]);
        printf("  Afternoon/Evening temperature: ");
        scanf("%f", &temperatures[i][1]);
    }

    // Calculate daily average temperatures
    for (int i = 0; i < DAYS; i++) {
        daily_avg[i] = (temperatures[i][0] + temperatures[i][1]) / TIMES;
    }

    // Display all temperature values recorded day-wise
    printf("\n--- Temperature Values Recorded Day-wise ---\n");
    for (int i = 0; i < DAYS; i++) {
        printf("Day %d: Morning = %.2f, Afternoon/Evening = %.2f\n", i + 1, temperatures[i][0], temperatures[i][1]);
    }

    // Display average temperature for each day
    printf("\n--- Average Temperature for Each Day ---\n");
    for (int i = 0; i < DAYS; i++) {
        printf("Day %d Average Temperature: %.2f\n", i + 1, daily_avg[i]);
    }

    // Find and display the day with the highest average temperature
    int highest_avg_day_index = 0;
    float highest_avg_temp = daily_avg[0];

    for (int i = 1; i < DAYS; i++) {
        if (daily_avg[i] > highest_avg_temp) {
            highest_avg_temp = daily_avg[i];
            highest_avg_day_index = i;
        }
    }

    printf("\n--- Day with the Highest Average Temperature ---\n");
    printf("Day %d had the highest average temperature: %.2f\n", highest_avg_day_index + 1, highest_avg_temp);

    return 0;
}

