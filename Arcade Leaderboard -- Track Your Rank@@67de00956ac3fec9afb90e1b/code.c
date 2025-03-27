#include <stdio.h>

// Function to find the player's rank
void findRanks(int leaderboard[], int n, int scores[], int m) {
    int ranks[n]; // Store ranks of leaderboard scores
    int uniqueRank = 1;

    // Assign ranks to the leaderboard
    ranks[0] = 1;
    for (int i = 1; i < n; i++) {
        if (leaderboard[i] == leaderboard[i - 1]) {
            ranks[i] = ranks[i - 1]; // Same rank for duplicate scores
        } else {
            ranks[i] = ++uniqueRank; // Increment rank for a new score
        }
    }

    int index = n - 1; // Start from the lowest leaderboard score
    for (int i = 0; i < m; i++) {
        int score = scores[i];

        // Move up the leaderboard while the player's score is higher
        while (index >= 0 && scores[i] >= leaderboard[index]) {
            index--;
        }

        // Assign rank based on position
        printf("%d\n", (index == -1) ? 1 : ranks[index] + 1);
    }
}

int main() {
    int n, m;

    // Read leaderboard size
    scanf("%d", &n);
    int leaderboard[n];

    // Read leaderboard scores
    for (int i = 0; i < n; i++) {
        scanf("%d", &leaderboard[i]);
    }

    // Read number of games
    scanf("%d", &m);
    int scores[m];

    // Read game scores
    for (int i = 0; i < m; i++) {
        scanf("%d", &scores[i]);
    }

    // Find and print ranks
    findRanks(leaderboard, n, scores, m);

    return 0;
}
