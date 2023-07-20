#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // gets user's name
    string name = get_string("What's your name? ");
    // says hello to the user
    printf("hello, %s\n", name);
}