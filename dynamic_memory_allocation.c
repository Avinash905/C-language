#include <stdio.h>
#include <stdlib.h>

int main()
{
    //use of malloc
    // int* ptr;
    // ptr=(int*) malloc(10*sizeof(int));
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("Enter the value no %d of this array\n",i);
    //     scanf("%d",&ptr[i]);
    // }
    // for(int i=0; i<3;i++)
    // {
    //     printf("The value of %d of this array is %d\n",i,ptr[i]);
    // }

    // //use of calloc
    // int* ptr;
    //     ptr=(int*) calloc(10,sizeof(int));
    //     for (int i = 0; i < 3; i++)
    //     {
    //         printf("Enter the value no %d of this array\n",i);
    //         scanf("%d",&ptr[i]);
    //     }
    //     for(int i=0; i<3;i++)
    //     {
    //         printf("The value of %d of this array is %d\n",i,ptr[i]);
    //     }

    //use of calloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)calloc(10, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value of %d of this array is %d\n", i, ptr[i]);
    }

    //use of realloc
    printf("Enter the size of the new array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d of this array is %d\n", i, ptr[i]);
    }

    free(ptr); 
    
    return 0;
}