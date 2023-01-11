#include<stdio.h>

int is_vowel(char a)
{
    if((a =='a') || (a =='e') || (a =='i') || (a =='o') || (a =='u'))
        return 1;
    else
        return 0;
}

int main()
{
    char ch;
    ch = getchar();
    if(is_vowel(ch)==1)
        printf("Vowel");
    else
        printf("Consonent");
    return 0;
}