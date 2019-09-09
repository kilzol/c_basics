//creating a program to understand pointer in c

#include<stdio.h>
int main()
{int x,*y,**z;
printf("enter any number");
scanf("%d",&x);
y=&x;
z=&y;
printf("address of x=%u \n ",&x);
printf("address of x=%d \n ",y);
printf("address of y=%u \n ",&y);
printf("address of y=%d \n ",z);
printf("address of z=%u \n ",&z);
printf("value stored in z=%d \n ",*(&z));
return 0;
}