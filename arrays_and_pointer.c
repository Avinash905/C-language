#include <stdio.h>
int main()
{
    int a=34;
    int* ptra=&a;
    
    printf("%d\n",ptra);
    printf("%d\n",ptra+1);

    int arr[]={1,2,3,4,5,6,67};
    int* arrayptr=arr;
    printf("value at position 3 of the array is %d\n",arr[3]);
    printf("the address of first element of the array is %d \n",&arr[0]);
    printf("the address of first element of the array is %d \n",arr);
    printf("the address of second element of the array is %d \n",&arr[1]);
    printf("the address of second element of the array is %d \n",arr+1);
    arrayptr++;

    printf("the value of first element of the array is %d \n",*(&arr[0]));
    printf("the value of first element of the array is %d \n",*(arr));
    printf("the value of first element of the array is %d \n",arr[0]);
    printf("the value of first element of the array is %d \n",arr[1]);
    printf("the value of second element of the array is %d \n",*(&arr[1]));
    printf("the value of second element of the array is %d \n",*(arr+1));

    return 0;
}