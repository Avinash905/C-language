#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
}; // }or avi,ravi,shubham;

int main()
{
    struct Student avi, ravi, shubham; //local variables
    avi.id=34;
    ravi.id=2;
    
    shubham.id=3;
    ravi.marks=466;
    avi.marks=466;
    shubham.marks=466;
    avi.fav_char='p';
    ravi.fav_char='p';
    shubham.fav_char='p';
    strcpy(avi.name,"Avi is student of the year");

    printf("Avi got %d marks\n",avi.marks);
    printf("Avi is: %s",avi.name);
    return 0;
}