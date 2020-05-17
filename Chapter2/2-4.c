#include <stdio.h>

#define MAXLINE 1000
#define TRUE 1
#define FALSE 0

void squeeze(char s1[], char s2[], char retrn_str[]);
int main(void)
{
  char retrn_str[MAXLINE];
  squeeze("This is a test", "t", retrn_str);
  printf("%s", retrn_str);
  return 0;
}


void squeeze(char s1[], char s2[], char retrn_str[])
{
  int s1Index, s2Index, retrn_strIndex, repeated;
  retrn_strIndex = 0;
  for (s1Index = 0; s1[s1Index] != '\0'; s1Index++)
    {
      repeated = FALSE;
      for (s2Index = 0; s2[s2Index] != '\0' ; s2Index++)
        {
          if (s1[s1Index] == s2[s2Index])
            {
              repeated = TRUE;
            }
        }
      if (repeated == FALSE)
        {
          retrn_str[retrn_strIndex] = s1[s1Index];
          retrn_strIndex++;
        }
    }
  retrn_str[retrn_strIndex] = '\0';
}
