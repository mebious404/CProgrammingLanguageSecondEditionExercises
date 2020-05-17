#include <stdio.h>
#include <string.h>

#define MAXLINE 1000
int getln(char line[], int maxline);
void copy(char to[], char from[]);


int main (void)
{
   int len, ndigit;
   int max;
   int j, ch;
   char line[MAXLINE];
   char longest[MAXLINE];

   max = 0;
   ndigit = 0;
   while ((len = getln(line, MAXLINE)) > 0){
	   if (len > max){
	      max = len;
	      copy(longest, line);
	   }
   }

   for (j = 0; longest[j + 1] != '\0'; j++){
	   ++ndigit;
   }

   if (max > 0){
	printf("\n%s%d", longest, ndigit);
   } 
   return 0;
}

int getln(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1; i++){

	    c = getchar();
	    if (c == '\n')
	    {
		break;
	    }
	    if (c == EOF)
	    {
		break;
	    }
	    s[i] = c;
	    
	}     
    if (c == '\n'){
	s[i] = c;
	++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]){ 
    
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0'){
	++i;
    }
}
