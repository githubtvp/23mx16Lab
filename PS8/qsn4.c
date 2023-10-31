#include <stdio.h>
#include <string.h>

int countOccurences(const char *sentence, const char *word)
{
    int count = 0;
    char *ptr = (char *)sentence;

    while ((ptr = strstr(ptr, word)) != NULL)
    { // first occurrence of a substring within a string
        count++;
        ptr++;
    }
    return count;
}

int main()
{
    char sentence[1000];
    char word[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0; // Removing the newline character

    printf("Enter a word to find: ");
    scanf("%s", word);

    int occurrences = countOccurences(sentence, word);
    printf("The word '%s' occurs %d times in the sentence.\n", word, occurrences);

    return 0;
}
