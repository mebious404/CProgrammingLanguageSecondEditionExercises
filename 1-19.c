#include <stdio.h>

#define MAXLINE 1000

int getln (char s[]);
void  reverse (char s[], int lenght);

int main(void)
{
   int len;
   char line[MAXLINE];

   while((len = getln(line)) > 0 )
   {
	  reverse(line, len); 
	  printf("%s", line);     
	   
   }
   //reverse(line, len);
   //printf("%s", line);


}

int getln (char s[])
{
    int c, i;

    for (i=0; (c=getchar()) != EOF && c != '\n'; i++)
    {
       s[i] = c;
    }
    if (c == '\n')
    {
       s[i] = c;
    }
    s[i] = '\0';
    return i;
}

void  reverse (char s[], int lenght)
{
   char word[lenght];
   int j;

   for (j=0; j <= lenght; j++)
   {
       word[j] = s[j];   
   }

   lenght = lenght - 1;
   	

   int i;

   for(i=0; i <= (lenght); i++)
   {
      s[i] = word[lenght - i];

   }
   
}
