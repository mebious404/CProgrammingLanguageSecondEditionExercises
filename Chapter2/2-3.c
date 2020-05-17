#include <stdio.h>
#include <string.h>

int htoi(char s[]);
int power (int x, int y);

int main (void)
{
   printf("%i\n", htoi("FFFF"));
   return 0;
}


int htoi(char s[])
{
   int i, c, total, lenght, expoent;
   lenght = strlen(s);
   total = 0;
   i = 0;
   expoent = 0;

   if ((s[0] == '0' && s[1] == 'x') || (s[0] == '0' && s[1] == 'X'))
   {
	   i = 2;
   }

   while  (i < lenght)
   {
   	if(s[i] >= '0' && s[i] <= '9')
	{
        	total = total + ((s[i] - '0') * power(16, expoent));
	}

	if(s[i] >= 'A' && s[i] <= 'F')
	{
		total = total + ((s[i] - 55) * power(16, expoent));
	}

	if(s[i] >= 'a' && s[i] <= 'f')
	{
        	total = total + ((s[i] - 87) * power(16, expoent));
	}
	i++;
	expoent++;
   }

   return total;
}

int power (int x, int y)
{
  int i, result;
  result = 1;
  if (y == 0)
  {
  	return 1;
  }
  for (i=0; i < y; i++)
  {
  	result = result * x;
  }

  return result;
}
