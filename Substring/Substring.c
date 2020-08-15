// Online C compiler to run C online.
// Write C code in this online editor and run it.

#include <stdio.h>
#include <string.h>

void substring(char string[])
{
    /* Extract the first substring */
    char * token = strtok(string, "_");
    /*loop through the string to extract all other substrings */
    while( token != NULL )
        {
	      printf( " %s\n", token ); /*printing each substring */
	      token = strtok(NULL, "_");
        }
}

int main()
{
    /* Declare string variable */
    char a[100];
    printf("Enter a string with delimeter: \n");
    /* Take string as input */
    gets(a);
    printf("Substrings are:\n");
    substring(a);
}
