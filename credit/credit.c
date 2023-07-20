#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
// #include <stdlib.h>

int main(void)
{
    long card_number = get_long("Number: ");
    long int beginning = card_number / 10000000000000;
    long int modulo_div = 10;
    long int div = 1;
    const int inc = 10;
    int storage = 0;
    // int nDigits = floor(log10(labs(card_number))) + 1;

    for (int i = 0; i < 16; i++)
    {
        //pick the last digit, then second to last, and so on...
        int digit = (card_number % modulo_div) / div;
        if (i % 2 == 0)
        {
            storage += digit;
        }
        else
        {
            int digit_times_two = digit * 2;
            // in case digit_times_two is inbetween 10-20
            if (digit_times_two > 9)
            {
                storage += 1;
                storage += digit_times_two % 10;
            }
            else
            {
                storage += digit_times_two;
            }
        }

        modulo_div *= inc;
        div *= inc;
    }

    // printf("checksum = %d\n", storage);
    // printf("beginning = %ld\n", beginning);

    if (storage % 10 == 0)
    {
        if (beginning == 34 || beginning == 37)
        {
            printf("AMEX\n");
        }
        else if ((beginning / 10) > 50 && (beginning / 10) <= 55)
        {
            printf("MASTERCARD\n");
        }
        else if (beginning / 100 == 4 || beginning == 4 || card_number / 1000000000000 == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

// 4003600000000014

// AMEX 378282246310005
// AMEX CORP 378734493671000
// MASTER CARD 2221000000000009
// MASTER CARD 5555555555554444
// VISA 4111111111111111
// VISA 4222222222222

// Standard Test Cards
// American Express 378282246310005
// American Express 371449635398431
// American Express Corporate 378734493671000
// Diners Club 30569309025904
// Discover 6011111111111117
// Discover 6011000990139424
// JCB 3530111333300000
// JCB 3566002020360505
// Mastercard 2221000000000009
// Mastercard 2223000048400011
// Mastercard 2223016768739313
// Mastercard 5555555555554444
// Mastercard 5105105105105100
// Visa 4111111111111111
// Visa 4012888888881881
// Visa 4222222222222
// Note: Even though this number has a different character count than the other test numbers, it is the correct and functional number.
// HSA / FSA
// Note: These cards are only supported on Chase Paymentech Salem.
// Visa 4999991111111113 or 4999992222222229
// Mastercard 5199999999999991 or 5299999999999990