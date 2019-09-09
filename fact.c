#include<stdio.h>
int fact(int x);
int main()
{int sol;
int x;
printf("enter the number whoes factorial you want to know \n");
scanf("%d",&x);
sol = fact(x);
printf("the factorial is %d",sol);
return 0;
}

int fact(int x)
{
if(x==1){
return 1;  //compiler uses stack for implementing normal as well as recursive function calls
}
else {
return( x*fact(x-1));

}

}