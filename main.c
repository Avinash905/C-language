#include <stdio.h>
int main()
{
    //Single line comments: compiler will ignore this
    /*
    this is a 
    multi line comment
    */
   int a=7; //2 to 4 bytes
   unsigned short interger2=8;
   unsigned int integer=8;
   long integer3=8;

   float b=8.0; //4 bytes, 6 decimal places
   double myfloat1=7.45; //8 bytes, 15 decimal places
   long double myfloat2=7.43453455; //10 bytes, 19 decimal places

   char c='t'; //1 byte, single quote is char, double quote is string
   
   printf("hello %d\n",a);
   printf("%f\n",b);
   printf("%c\n",c);
   printf("The size of int is %d\n",sizeof(int));
   printf("The size of unsigned int is %d\n",sizeof(unsigned int));
   printf("The size of double is %d\n",sizeof(double));
   printf("The size of float is %d\n",sizeof(float));
   printf("The size of char is %d\n",sizeof(char));

   int harryName; //This is variable declaration
   harryName=76; //This is variable initialization
   char five='5'; //This is variable declaration and initializaton
   const int i=9; //you will get an error if you try to change the value 
   
   /*
    Arithematic: + - * / % ++ --
    Relation: == != < > <= >=
    Logical: && || !
    Bitwise: & | ^ ~ << >>
    Assignment: = += -= *= /= %=
    Miscelleneous: , * ? &(address)
   */
   int a1=6, b1=7;
   printf("The sum of a1 and b1 is %d\n",a1+b1);
   //printf("The pre increment of a1 is %d\n",++a1); //increments before printing
   printf("The post increment of a1 is %d\n",a1++); //increments after printing

   int harry=9, rohan=45;
   printf("%d\n",harry==rohan);

   int h=0, j=1;
   printf("logical operation returns %d\n",h&&j);

   int A=60, B=14;
//    A=00111100
//    B=00001101
//    R=00001100
   printf("Bitwise operator returned %d\n",A&B); //

   int ha=9;
   ha+=9;
   printf("ha is %d\n",ha);

   int aviInput;
   printf("Please enter the value of aviInput\n");
   scanf("%d",&aviInput);
   printf("You entererd %d as aviInput\n",aviInput);

   int aInput;
   printf("Please enter the value of aInput\n");
   scanf("%d",&aInput);
   printf("You entererd %f as aInput\n",(float)aInput); //typecasting

   int age;
   printf("Enter your age \n");
   scanf("%d",&age);
   if (age<18)
   {
      printf("You can drive\n");
   }
   else if(age>=18 && age<=24)
   {
      printf("You are banned from driving\n");
   } 
   else
   {
      printf("You can drive but carefully\n");
   }
   int i4=age>3?100:200; //short hand if else
   printf("%d",i4);

   int index=0;
   while(index<10)
   {
      printf("%d\n",index);
      index++;
   }

   for (int j = 0; j < 67; j++)
   {
      printf("%d\n",j);
   }
   do
   {
      printf("do while loop is running");
   } while (j>65656);
   
    
   return 0; //main function that returns an integer value
}