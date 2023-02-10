/* Write the following programs using switch case statement:
   To check that an input alphabet is vowel or consonant */

#include <stdio.h>

int main(void)
{
    char alphabet;
    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);

    switch (alphabet)
    {
    case 'a':
        printf("Vowel\n");
        break;
    case 'e':
        printf("Vowel\n");
        break;
    case 'i':
        printf("Vowel\n");
        break;
    case 'o':
        printf("Vowel\n");
        break;
    case 'u':
        printf("Vowel\n");
        break;
    case 'A':
        printf("Vowel\n");
        break;
    case 'E':
        printf("Vowel\n");
        break;
    case 'I':
        printf("Vowel\n");
        break;
    case 'O':
        printf("Vowel\n");
        break;
    case 'U':
        printf("Vowel\n");
        break;
    default:
        printf("Consonant\n");
        break;
    }

    return 0;
}