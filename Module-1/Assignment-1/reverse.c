#include <stdio.h>
 
int main()
{
   char str[1000], rev[1000];
   int i, j, c = 0;
 
   printf("Input string is:\n");
   fgets(str,1000,stdin);

   while (str[c] != '\0')
      c++;
 
   j = c - 1;
 
   for (i = 0; i < c; i++) {
      rev[i] = str[j];
      j--;
   }
 
   rev[i] = '\0';
   printf("Reverse of the given String:%s\n", rev);
   return 0;
}