#include <stdio.h>

void newPrint(char*char1)
{
    printf("The value is %s\n",char1);
}

int sum(int a,int b)
{
   return a+b;
}

float average(float a,float b)
{
   return (a+b)/2;
}

int main()
{
    newPrint("Hello World\n");
    printf("%d\n",sum(100,299));
    printf("%f\n",average(100,299));

    int arr[10]={0,10,20,30,40,50,60,70,80,90};
    for(int i=0;i<10;i++)
    {
       printf("Enter the value for index %d\n",i);
       scanf("%d",&arr[i]);
       printf("%d\n",arr[7]);
    }

    for(int i=0;i<10;i++)
    {
       printf("The value for index %d is %d\n",i,arr[i]);
    }
    
 
    
        int a=98;
        printf("%d\n",a);
        int* ptr;
        ptr=&a;
        *ptr=188;
        printf("%d",a);
        
        int* ptr=NULL;
        if (ptr)
        {
            printf("pointer is not null");
        }
        ptr=&a;
        *ptr=188;
        printf("%d",a); 
     

    
        char name[3]={'m','y','\0'};
        char str1[65],str2[98],str3[32];
        strcpy(str1,name);
        strcpy(str2,"rohan");
        strcat(str1,str2);
        printf("%d",strcmp(str1,str2));
        printf("%s",str1);
        
        return 0;
    
}

  
