#include <stdio.h>

int main(void)
{
    char text[1000];
    int letters = 0, words = 1, sentences = 0;
    char c;

    printf("Text: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++)
    {
        c = text[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letters++;
        else if (c == ' ')
            words++;
        else if (c == '.' || c == '!' || c == '?')
            sentences++;
    }

    float L = (letters * 100.0) / words;
    float S = (sentences * 100.0) / words;
    float index = 0.0588 * L - 0.296 * S - 15.8;

    int grade;
    if (index - (int)index >= 0.5)
        grade = (int)index + 1;
    else
        grade = (int)index;

    if (grade < 1)
        printf("Before Grade 1\n");
    else if (grade >= 16)
        printf("Grade 16+\n");
    else
        printf("Grade %d\n", grade);

    return 0;
}
