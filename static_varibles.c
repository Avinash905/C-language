#include <stdio.h>

int b = 20; //global variable

int func1(int b1)
{
    static int myvar = 0;
    printf("The value of myvar is %d", myvar);
    myvar++;
    //printf("The value of b inside func1 is %d\n",b);
    //printf("The address of b inside func1 is %d\n",&b);
    return b1 + myvar;
}

int main()
{
    int b = 344;
    int val = func1(b);
    val = func1(b);
    int *ptr = &val;

    //printf("The address of b inside main is %d\n",&b);
    //printf("The value of func1 is %d\n",val);

    return 0;
}