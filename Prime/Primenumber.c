#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

/* Function to check a number entered in prime or not */
bool isprime(int a)
{
    if(a<=1)
    {
        return false;
    }
    for(int i=2;i<a/2;i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    printf("Enter Number: \n");
    /* Take input */
    scanf("%d",&n);
    /* Print true if number is prime and print false if the number is not prime */
    printf("%s",isprime(n)? "true":"false");
    return 0;
}