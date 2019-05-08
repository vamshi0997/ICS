#include <stdio.h>
 
int main() {
    char str[1000], new[1000];
    int i, j = 1, c = 0;
 
    printf("Input string is:\n");
    fgets(str,1000,stdin);

    while (str[c] != '\0')
       c++;
 
    new[0] = str[0];
    for (i = 1; i < c; i++) {
        if(str[i] == ' ' && str[i-1] == ' ') {
                continue;
        } else {
            new[j] = str[i];
            j++;
        }
    }
   new[j] = '\0';
   printf("New string is:\n%s", new);
   return 0;
}
