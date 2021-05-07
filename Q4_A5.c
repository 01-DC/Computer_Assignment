#include <stdio.h>

void main()
{
   char ch;
   printf("Enter any character to check: ");
   scanf("%c", &ch);
   if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("Entered character is Vowel");
    else
        printf("Entered character is Consonant");
}