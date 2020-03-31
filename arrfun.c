
//a program to pass an array to a function
#include<stdio.h>
void display(int *,int);

int main()
{
int arr[6]={4,6,7,9,5,8};
display(&arr[0],6); //passing full array to a function
for(int i=0;i<6;i++)
{
	printf("%d ",i[arr]);
	printf(" %d %d \n",*(arr+i),*(i+arr));
	
}
return 0;
}
void display(int *j,int n)
{
int i;
for(int i=0;i<n;i++)
{
printf("element %d =%d\n",i+1,*j);
j++;
}
}