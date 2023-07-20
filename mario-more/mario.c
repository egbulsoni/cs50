#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //height is the number of lines/rows
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0 || height > 8);


    // int row = 0;
    //sharps are #
    int sharps = 0;
    int column = height;

    for (int row = 0; row < height; row++)
    {
        column--;

        for (int spaces = 0; spaces < column; spaces++)
        {
            // put spaces according to the column size
            putchar(' ');
        }

        // reset sharps to 0 so we can start adding them
        sharps = 0;

        do
        {
            putchar('#');
            sharps++;
        }
        // sharps are added according to the current row
        while (sharps <= row);

        printf("  ");

        // reset sharps to 0 so we can start adding them
        sharps = 0;

        do
        {
            putchar('#');
            sharps++;
        }
        // sharps are added according to the current row
        while (sharps <= row);

        printf("\n");
    }


}

// Height: 4
//    #  #
//   ##  ##
//  ###  ###
// ####  ####