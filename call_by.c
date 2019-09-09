#include<stdio.h>
int swapv(int x,int y);
int swapr(int *x,int *y);
int main()
{int x,y,z;
printf("Enter two number and enter 1 for swapping by call by value and 2 for swapping by call by value \n");
scanf("%d%d %d",&x,&y,&z);

if(z==1){
	
swapv(x,y);	
}
else{
swapr(&x,&y);
printf("value at address is changed in this case a=%d and b=%d \n",*(&x),*(&y));
}
return 0;
}

int swapv(int x,int y)
{int t;
t=x;
x=y;
y=t;
printf(" value at address does not change a=%d and b=%d \n",x,y);
}

int swapr(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;

}