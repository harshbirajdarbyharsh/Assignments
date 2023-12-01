#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'a')
    {
        printf("%d",cValue);
    }
    else if(cValue >= 'A')
    {
        printf("%d",cValue);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}

/*#include <stdio.h>

char convertCase(char inputChar) {
    if (inputChar >= 'a' && inputChar <= 'z') {
        return inputChar - ('a' - 'A');
    } else if (inputChar >= 'A' && inputChar <= 'Z') {
        return inputChar + ('a' - 'A');
    }
    return inputChar; // If the character is not alphabetic, return it as is.
}

int main() {
    char inputChar, convertedChar;

    // Prompt the user for input
    printf("Enter a character: ");
    scanf(" %c", &inputChar);

    // Convert the case using the function
    convertedChar = convertCase(inputChar);

    // Display the converted character
    printf("Converted character: %c\n", convertedChar);

    return 0;
}*/
