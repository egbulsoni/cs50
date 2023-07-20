#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    // case player 1's score is better
    if (score1 > score2)
    {
        printf("Player 1 wins!...");
    }
    // case player 2's score is better
    else if (score2 > score1)
    {
        printf("Player 2 wins!...");
    }
    // case both are equal
    else
    {
        printf("Tie!");
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int score = 0;
    // loop through each word
    for (int i = 0; i < strlen(word); i++)
    {
        // who needs POINTS table though?
        // look up what letter is and how much it is worth
        switch (tolower(word[i]))
        {
            // letters worth 1 point
            case 'a':
            case 'e':
            case 'i':
            case 'l':
            case 'n':
            case 'o':
            case 'r':
            case 's':
            case 't':
            case 'u':
                score++;
                break;
            // letters worth 2 points
            case 'd':
            case 'g':
                score += 2;
                break;
            // letters worth 3 points
            case 'b':
            case 'c':
            case 'm':
            case 'p':
                score += 3;
                break;
            // letters worth 4 points
            case 'f':
            case 'h':
            case 'v':
            case 'w':
            case 'y':
                score += 4;
                break;
            //letters worth 5 points
            case 'k':
                score += 5;
                break;
            // letters worth 8 points
            case 'j':
            case 'x':
                score += 8;
                break;
            // letters worth 10 points
            case 'q':
            case 'z':
                score += 10;
                break;
        }
    }
    // after looping through each letter, return score
    return score;
}
