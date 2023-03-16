/* Write the following programs using switch case statement:
   To check that an input alphabet is vowel or consonant */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    char alphabet;
    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);

    if (alphabet >= 'A' && alphabet <= 'Z')
    {
        alphabet += 32;
    }
    switch (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
    {
        case true:
            printf("Vowel\n");
            break;
        default:
            printf("Consonant\n");
    }

    return 0;
}