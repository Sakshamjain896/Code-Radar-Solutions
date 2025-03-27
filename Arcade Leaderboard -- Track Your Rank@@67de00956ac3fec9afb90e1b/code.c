#include <stdio.h>

// Function to compute ranks
void computeRanks(int scores[], int ranks[], int n) {
    ranks[0] = 1;
    for (int i = 1; i < n; i++) {
        if (scores[i] == scores[i - 1]) {
            ranks[i] = ranks[i - 1];
        } else {
            ranks[i] = ranks[i - 1] + 1;
        }
    }
}

// Function to determine player's rank for each game score
void findRanks(int scores[], int ranks[], int n, int playerScores[], int m) {
    int index = n - 1; // Start from the lowest rank in leaderboard
    for (int i = 0; i < m; i++) {
        while (index >= 0 && playerScores[i] >= scores[index]) {
            index--; // Move up the leaderboard
        }
        printf("%d\n", (index >= 0) ? ranks[index] + 1 : 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int scores[n], ranks[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }
    
    computeRanks(scores, ranks, n);
    
    int m;
    scanf("%d", &m);
    int playerScores[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &playerScores[i]);
    }
    
    findRanks(scores, ranks, n, playerScores, m);
    
    return 0;
}
