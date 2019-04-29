/*The substitution cipher is used to decode a previously encrypted text where the normal
    alphabet a-z is replaced with a randomly generated alphabet as supplied.
        The cipher alphabet supplied is 
"QWERTYUIOPASDFGHJKLZXCVBNM"
- Note alphabet is in uppercase as required for all text and code will
    be implemented to support this.


*/
#include <stdio.h>
void substitution(char*, char*); // declare the function definition at first to be called later

int main() 
{
    
char cipher[26] ="QWERTYUIOPASDFGHJKLZXCVBNM"; // this is the cipher alphabet as provided by the user to be used later
char message[40] = "HSTQLT UTZ DOSA QZ ZIT LIGHL";// enter here a message previously encrypted by a substitution cipher of the same alphabet

substitution(message, cipher); // call the function inside the int main function to ensure that the 'message' and 'cipher 'are reused when called

return 0;
}
    
void substitution(char *message, char *cipher)
// function prototype
{
int i=0; // declaring the variables to ensure compiler knows to start at the first charachter of the message
int j=0;

while(message[i]!= 0) // if the message does not equal a NULL of 0 charachter then proceed with the following
{
    if (message[i]>64 &&message[i]<91) // ensuring the message charachters are upper case and within the ASCII upper case letters of 64 and 91
    { 
       while (message[i]!=cipher[j]) 
       // main function of the encrypytion is stating that the message and cipher are not identical
       {
               j++;   // encrypting the variable to ensure there is no infinite loop
        }
             message[i]=j+65; // this will rotate the alphabet provided to meet the code of the message provided
             
    }
        i++;
        j=0;
}
puts(message); // essentially the print function which sends the now decrypted message to the print function inside intmain 
}