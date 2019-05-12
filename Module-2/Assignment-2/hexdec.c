#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#define len 100
#define YES 1
#define NO 0

int htoi(char s[])
{
    int hex,i,ishex,n;
    i = 0;
    if( s[i] == '0' && (s[i+1] == 'x' || s[i+1] == 'X'))
    {
        i = i+2;
    }
    
    n = 0;
    ishex = YES;

    for(; ishex == YES; ++i)
    {
        if(s[i] >='0' && s[i] <='9')
            hex = s[i] - '0';
        else if(s[i] >='a' && s[i] <='f')
            hex = s[i] -'a' + 10;
        else if(s[i] >='A' && s[i] <='F')
            hex = s[i] -'A' + 10;
        else
            ishex = NO;
        
        if(ishex == YES)
            n = 16 * n + hex;
    }
    return n;
}

int main(int argc, char *argv[]) {
   char hexadecimal[len];
   printf("enter the proper hexadecimal number:\n");
   fgets(hexadecimal,len, stdin);

   if(htoi(hexadecimal) == 0) {
      printf("Hex string overflow or not a hex character.\n");
   }
   else {
      printf("%u\n", htoi(hexadecimal));
   }
   return 0;  
}