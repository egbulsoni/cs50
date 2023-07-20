#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size, end_size, population, years;
    years = 0;
    do
    {
        start_size = get_int("type in the starting population size: ");
        population = start_size;
    }
    while (start_size < 9);
    // TODO: Prompt for end size
    do
    {
        end_size = get_int("type in the end population size: ");
    }
    while (end_size < start_size);
    // TODO: Calculate number of years until we reach threshold
    if (start_size != end_size)
    {
        do
        {
            population = population + population / 3 - population / 4;
            years++;
        }
        while (population < end_size);
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}
