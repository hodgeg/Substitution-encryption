#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void substitution(char*, char*);

int main() 
{
    
char cipher[26] ="QWERTYUIOPASDFGHJKLZXCVBNM";
char message[40] = "ABCDEF";

//char * theanswer;
substitution(message, cipher);
//int i=0;
//while (theanswer!=0)
//{
//    printf("%c", theanswer[i]);
//    i++;
//}

return 0;
}
    
 
 
void substitution(char *message, char *cipher)
{
int i=0;
int j=0;

while(message[i]!= 0)
{
    if (message[i]>64 &&message[i]<91)
    { 
        while (message[i]!=cipher[j])
        {
                j++;   
        }
             message[i]=j+65;
             
    }
        i++;
        j=0;
}
puts(message);
}