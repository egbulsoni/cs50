#include <cs50.h>
#include <stdio.h>
#include <strings.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    // TODO
    for (int i = 0; i < candidate_count; i++)
    {
        // case the name (param) is equal to the candidates[i] (a single candidate from the array)
        if (strcasecmp(name, candidates[i].name) == 0)
        {
            // adds 1 to candidates[i]'s votes
            candidates[i].votes += 1;
            return true;
        }
    }
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    // TODO
    int k = 0;
    int biggest_votes = candidates[k].votes;
    do
    {
        k++;
        // check if there are bigger values
        if (candidates[k].votes > biggest_votes)
        {
            biggest_votes = candidates[k].votes;
        }
    }
    while (k < candidate_count);

    // print the candidates that won the election
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes == biggest_votes)
        {
            printf("%s\n", candidates[i].name);
        }
    }
    return;
}