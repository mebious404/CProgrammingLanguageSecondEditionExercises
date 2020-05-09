#include <stdio.h>

#define IN 1
#define OUT 0

int main (void)
{
   int c, i, j;
   int nletter, ndigit, nwhite, nother;
    
   
   nletter = ndigit = nwhite = nother = 0;

   while((c = getchar()) != EOF){
	   if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
		   ++nletter;
	   }
	   else if (c >= '0' && c <= '9'){
		   ++ndigit;
	   }
	   else if (c == ' ' || c == '\n' || c == '\t'){
		   ++nwhite;
	   }
	   else{
		   ++nother;
	   } 	   
   }
   printf("\n");

   printf("nletter ");

   for(i = 0; i < nletter; i++){
	   printf("|");
   }
   i = 0;
   printf("\n");

   printf("ndigit ");

   for (i = 0; i < ndigit; i++){
	   printf("|");
   }
   i = 0;
   printf("\n");


   printf("nwhite ");

   for (i = 0; i < nwhite; i++){
	   printf("|");
   }
   i = 0;
   printf("\n");
      
   printf("nother ");

   for (i = 0; i < nother; i++){
	   printf("|");
   }
   i = 0;
   printf("\n");
   
   return 0;
}
