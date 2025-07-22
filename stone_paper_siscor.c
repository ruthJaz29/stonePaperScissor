#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int rNum() {
    return rand() % 101; 
}

char macChoice(int rNum) {
    if (rNum >= 0 && rNum < 33) {
        return 's'; 
    }
    if (rNum >= 33 && rNum < 66) {
        return 'p'; 
    }
    return 'x';  
}


void calWin() {
    int uScore = 0, mScore = 0;
    char mC;
    char uC;
    
    for (int i = 0; i < 3; i++) {
        mC = macChoice(rNum());
        printf("Enter your choice: ");
        scanf(" %c", &uC);
        printf("User - %c and Machine - %c",uC,mC);
        
        if (uC == mC) {
            printf("\nIt's a tie!\n");
        } else if ((uC == 'p' && mC == 's') || (uC == 's' && mC == 'x') || (uC == 'x' && mC == 'p')) {
            printf("\nUser WINS this round!\n");
            uScore++;
        } else {
            printf("\nMachine WINS this round!\n");
            mScore++;
        }
        
        printf("Score - User: %d, Machine: %d\n", uScore, mScore);
    }
    
    if (uScore > mScore) {
        printf("\nUser wins the game! Final score - User: %d, Machine: %d\n", uScore, mScore);
    } else if (mScore > uScore) {
        printf("\nMachine wins the game! Final score - User: %d, Machine: %d\n", uScore, mScore);
    } else {
        printf("\nIt's a tie game! FINAL SCORE -\n User: %d, Machine: %d\n", uScore, mScore);
    }
}

int main() {
    char uC;
    
    // Seed the random number generator
    srand(time(0));
    
    printf("Let's play Stone, Paper, Scissors!\n");
    printf("Best of 3 rounds.\n");
    printf("ONLY SMALL LETTERS\n");
    printf("Type 's' for STONE, 'p' for PAPER, 'x' for SCISSORS\n");
    
    calWin();
    
    return 0;
}

