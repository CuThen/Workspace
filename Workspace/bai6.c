#include <stdio.h>
#include <string.h>

static size;

void enter_print (char s1[])
{
    int len;
    printf("Enter ur string : ");
    gets(s1);
    len = strlen(s1);
    printf("Length of ur %s  is : %d",s1,len);
    size = len;
}
void nums_words(char s1[])
{
   int count = 1;
   for ( int i = 0; i < size; i++)
   {
       if (s1[i] == ' ')
           count++;
       
   }
   printf("\nNums of word : %d",count);
}
void find_char(char s1[],char c)
{
    int count = 0;
    for ( int i = 0; i < size; i++)
    {
        if(s1[i] == c)
           count++;
    }
    printf("\nNums of char : %d",count);
}
int main()
{
   char s1[1000];
   char c;
   enter_print(s1);
   nums_words(s1);
   printf("\nEnter ur need finding character: ");
   scanf("%c",&c);
   find_char(s1,c);
    
   return 0;
}