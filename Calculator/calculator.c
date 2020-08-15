#include <stdio.h>
#include <stdlib.h>

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return ;
}
int main()
{
int (*ptr)(int a,int b)=&add;

int result=ptr(4,3);

printf("Addition of the numbers : %d \n",result);
int (*ptr2)(int a,int b)=&sub;

int result1;
printf(" Subtraction of the numbers : %d\n",(*ptr2)(3,5));

}