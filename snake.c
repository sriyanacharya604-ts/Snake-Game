#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    int x = 13, y = 13;
    char move;
    int foodX = 16, foodY = 16;
    int score = 0;
    system("cls"); // Clear the console screen
    while (1) {

    // Board er size
        for (int i = 0; i < 30; i++) {

            for (int j = 0; j < 30; j++) {

            // Board er border
                if (i == 0 || i == 29 || j == 0 || j == 29) {
                    printf("#");
                }

                // Snake 
                else if (i == y && j == x) {
                    printf("O");
                }

                // Food 
                else if (i == foodY && j == foodX) {
                    printf("*");
                }

                else {
                    printf(" ");
                }
            }

            printf("\n");
        }

        // Game over condition
        if (x <= 0 || x >= 29 || y <= 0 || y >= 29) {
            printf("Game Over! Final Score: %d\n", score);
            break;
        }

        // Score print korbe
        score = (x == foodX && y == foodY) ? score + 1 : score;

        printf("\nScore: %d\n", score);

        // Food khawa hole food er position change korbe

        if (x == foodX && y == foodY) {
            foodX = 1 + rand() % 28;
            foodY = 1 + rand() % 28;
        }

        // Input nibo
        printf("Enter U/D/L/R to move (Q to quit): ");
        scanf(" %c", &move);

        // Move korbe
        if (move == 'U') {
            y--;
        }
        else if (move == 'D') {
            y++;
        }
        else if (move == 'L') {
            x--;
        }
        else if (move == 'R') {
            x++;
        }    
        else if (move == 'Q') {
            break;
        }
    }

    return 0;
}
