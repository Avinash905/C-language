#include <stdio.h>

int main()
{
    printf("Lets learn about pointers\n");
    int a=76;
    int* ptra=&a; //you can also declare using int *ptra=&a;
    int* ptr2=NULL;
    printf("The addre of some garbage is %p\n",ptr2);
    printf("The value of a is %d\n",a);
    printf("The value of a is %d\n",*ptra); //pointer dereferencing
    printf("The address of a is %x\n",ptra);
    printf("The address of a is %d\n",a);
    printf("The address of ptra is %p\n",&ptra);
    return 0;
}