#include <stdio.h>
#include <stdlib.h>


char* substitution(char* message, char* cipher[]);

int main() 
{

char cipher[26] ="QWERTYUIOPASDFGHJKLZXCVBNM";
char message = "GETTOCHOPPER";

substitution (message, cipher);
return 0;
}
    
  
char* substitution(char *message, char *cipher[]);
{
int i=0;


while(message[i]!='\0'&& message[i]>64 && message[i]<91)
{ 
    message[i]!=cipher[j];
        
        message[i]=cipher+65;
        {
            j++
        }
puts(message);
}
}

