// This challenge will help you to learn how to take a character, a string and a sentence as input in C.

#include <stdio.h>
#include <string.h>

int main() 
{
    char ch, s[100], sen[100];
    scanf("%c", &ch);
   
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);

    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s",sen);
    
    
    return 0;
}
