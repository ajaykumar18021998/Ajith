#include <stdio.h>
#include <ctype.h>

int main()
{
   char a;
    do {
    printf("Enter an alphabet: ");
    scanf(" %c", &c);
    }
     while (!isalpha(c));
     isLowercaseVowel = (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');
    isUppercaseVowel = (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a== 'U');
   if (isLowercaseVowel || isUppercaseVowel)
   printf("%c is a vowel.", a);
    else
    printf("%c is a consonant.", a);
   return 0;
}
