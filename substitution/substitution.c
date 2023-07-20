#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // must have exactly 2 arguments
    if (argc != 2)
    {
        printf("invalid number of arguments!\n");
        return 1;
    }
    // must have 26 letters total (entire alphabet)
    if (strlen(argv[1]) != 26)
    {
        printf("argument must have exactly 26 letters\n");
        return 1;
    }
    // counter to check for all letters in the alphabet
    int char_count = 0;
    // must be equal to the constant below
    const int TOTAL_CHAR_COUNT_IN_UPPERCASE = 2015;

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        // check if there's non alpha characters in argv[1]
        if (!isalpha(argv[1][i]))
        {
            printf("non alphabetic characters are not allowed!\n");
            return 1;
        }

        // check for duplicates
        for (int j = 0; j < strlen(argv[1]); j++)
        {
            // same letter, doesn't count
            if (j == i)
            {
                continue;
            }
            // convert to upper and compare
            if (toupper(argv[1][i]) == toupper(argv[1][j]))
            {
                printf("there are duplicates, %c - terminating program", argv[1][j]);
                return 1;
            }

        }
        // add to char_count each argv[1] letter casted to int
        char_count += (int) toupper(argv[1][i]);
    }

    // check if char_count == 2015 (all letters of the alphabet included)
    if (char_count != TOTAL_CHAR_COUNT_IN_UPPERCASE)
    {
        printf("invalid sequence of characters, must contain each letter of the alphabet exactly once");
        return 1;
    }

    // string to convert
    string my_str = get_string("plaintext:  ");
    printf("ciphertext: ");

    for (int i = 0; i < strlen(my_str); i++)
    {
        // switch containing each char in my_str and converting/outputting one by one
        switch (my_str[i])
        {
            // lowercase character conversion
            case 'a':
                putchar(tolower(argv[1][0]));
                break;
            case 'b':
                putchar(tolower(argv[1][1]));
                break;
            case 'c':
                putchar(tolower(argv[1][2]));
                break;
            case 'd':
                putchar(tolower(argv[1][3]));
                break;
            case 'e':
                putchar(tolower(argv[1][4]));
                break;
            case 'f':
                putchar(tolower(argv[1][5]));
                break;
            case 'g':
                putchar(tolower(argv[1][6]));
                break;
            case 'h':
                putchar(tolower(argv[1][7]));
                break;
            case 'i':
                putchar(tolower(argv[1][8]));
                break;
            case 'j':
                putchar(tolower(argv[1][9]));
                break;
            case 'k':
                putchar(tolower(argv[1][10]));
                break;
            case 'l':
                putchar(tolower(argv[1][11]));
                break;
            case 'm':
                putchar(tolower(argv[1][12]));
                break;
            case 'n':
                putchar(tolower(argv[1][13]));
                break;
            case 'o':
                putchar(tolower(argv[1][14]));
                break;
            case 'p':
                putchar(tolower(argv[1][15]));
                break;
            case 'q':
                putchar(tolower(argv[1][16]));
                break;
            case 'r':
                putchar(tolower(argv[1][17]));
                break;
            case 's':
                putchar(tolower(argv[1][18]));
                break;
            case 't':
                putchar(tolower(argv[1][19]));
                break;
            case 'u':
                putchar(tolower(argv[1][20]));
                break;
            case 'v':
                putchar(tolower(argv[1][21]));
                break;
            case 'w':
                putchar(tolower(argv[1][22]));
                break;
            case 'x':
                putchar(tolower(argv[1][23]));
                break;
            case 'y':
                putchar(tolower(argv[1][24]));
                break;
            case 'z':
                putchar(tolower(argv[1][25]));
                break;

            // capital letters
            // uppercase character conversion
            case 'A':
                putchar(toupper(argv[1][0]));
                break;
            case 'B':
                putchar(toupper(argv[1][1]));
                break;
            case 'C':
                putchar(toupper(argv[1][2]));
                break;
            case 'D':
                putchar(toupper(argv[1][3]));
                break;
            case 'E':
                putchar(toupper(argv[1][4]));
                break;
            case 'F':
                putchar(toupper(argv[1][5]));
                break;
            case 'G':
                putchar(toupper(argv[1][6]));
                break;
            case 'H':
                putchar(toupper(argv[1][7]));
                break;
            case 'I':
                putchar(toupper(argv[1][8]));
                break;
            case 'J':
                putchar(toupper(argv[1][9]));
                break;
            case 'K':
                putchar(toupper(argv[1][10]));
                break;
            case 'L':
                putchar(toupper(argv[1][11]));
                break;
            case 'M':
                putchar(toupper(argv[1][12]));
                break;
            case 'N':
                putchar(toupper(argv[1][13]));
                break;
            case 'O':
                putchar(toupper(argv[1][14]));
                break;
            case 'P':
                putchar(toupper(argv[1][15]));
                break;
            case 'Q':
                putchar(toupper(argv[1][16]));
                break;
            case 'R':
                putchar(toupper(argv[1][17]));
                break;
            case 'S':
                putchar(toupper(argv[1][18]));
                break;
            case 'T':
                putchar(toupper(argv[1][19]));
                break;
            case 'U':
                putchar(toupper(argv[1][20]));
                break;
            case 'V':
                putchar(toupper(argv[1][21]));
                break;
            case 'W':
                putchar(toupper(argv[1][22]));
                break;
            case 'X':
                putchar(toupper(argv[1][23]));
                break;
            case 'Y':
                putchar(toupper(argv[1][24]));
                break;
            case 'Z':
                putchar(toupper(argv[1][25]));
                break;
            default:
                putchar(my_str[i]);
                break;
        }
    }
    // new line
    printf("\n");
}