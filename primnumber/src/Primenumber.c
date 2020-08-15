#include "PrimeNumber.h"
/**
* @page Prime_Number.c
*
*/
bool isprime(int a)
{
    if(a<=1)  ////Check number is less than or equal to 1.
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

    