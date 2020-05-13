#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int getln(char line[], int maxline);
void copy(char to[], char from[]);
int getdigits (char string[]);

int main (void)
{
   int len;
   char line[MAXLINE];

   while ((len = getln(line, MAXLINE)) > 0){
	      if ((getdigits(line)) >= 80 ){
		  printf("%s", line);
	      }
	   }
   
   return 0;
}

int getln(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++){
        s[i] = c;
    }
    if (c == '\n'){
	s[i] = c;
	++i;
    }
    s[i] = '\0';
    return i;
}


int getdigits (char string[]){
   int j, ndigit;
   ndigit = 0;
   for (j = 0; string[j + 1] != '\0'; j++){
	   ++ndigit;
   }
   return ndigit;
 }
