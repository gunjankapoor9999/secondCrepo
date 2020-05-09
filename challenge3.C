#include<stdio.h>
#include<conio.h>
int main()
{
char alpha;
scanf("%c",&alpha);
switch(alpha)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
         printf("vowel");
          break;
default : printf("consonant");
}
}
