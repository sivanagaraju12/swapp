
#include"header.h"
int main()
{
int x,y;
int *a=&x;
int *b=&y;

printf("Enter x,y values:\n");
scanf("%d %d",&x,&y);

printf("Before swaping :%d %d",*a,*b);
swap(&x,&y);
printf("\nAfter swapping :%d %d",*a,*b);
return 0;
}
