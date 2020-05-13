#include <stdio.h>

#define IN 1
#define OUT 0

int main (void)
{
   int c, i, j, nw, nd,  state;
   int wordLenght[20];

   state = IN;
   nw = 0; //number of words
   nd = 0; //number of digits
   i = 0; //wordLenght array index
   
   while(i < 20){
	   wordLenght[i] = 0;
	   i++;
   }

   while((c = getchar()) != EOF){
   if(c == ' ' || c == '\n' || c == '\t'){  
	       state = OUT;
	       ++wordLenght[nd - 1];
       }
       else if (state == OUT){
	       state = IN;
	       ++nw;
	       nd = 0;
       }
   ++nd;
   }

   printf("\n");

   for (i = 0; i < 20; ++i){
       printf("%d ", (i + 1));
       if (wordLenght[i] > 0){
       while (j <  wordLenght[i]){
	       printf("|");
	       ++j;
       }
       }
       j = 0;
       printf("\n");
   }
      
   return 0;
   
}
