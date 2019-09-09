#include<stdio.h>
#include<math.h>
int main()
{
float x=0,j=0;
float sum=0;

printf("enter any number \n ");
scanf("%d",&x);

for(int z=1;z<10;z=z+2)
{
	j=pow(x,z);
sum= sum + (j/z);
}



printf("the value of the expression is %d \n",sum);
return 0;
}