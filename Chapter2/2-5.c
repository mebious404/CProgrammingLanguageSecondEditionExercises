#include <stdio.h>

#define MAXLINE 1000

int any(char s1[], char s2[]);
int main (void)
{
  printf("%i", any("Test", "s"));
}

//It returns the index of the array, so it will return 0 for the first char and so on.
int any(char s1[], char s2[]){
  int s1Index, s2Index;
  for (s1Index = 0; s1[s1Index] != '\0'; s1Index++){
    for (s2Index = 0; s2[s2Index] != '\0'; s2Index++){
      if (s1[s1Index] == s2[s2Index]){
        return s1Index;
      }
    }
  }
  return -1;
}
