#include<stdio.h>


int main()
{int a=0;int b=0;int c=0;int d=0;int e=0;int max1=0;int max2=0;int max=0;
	int n,m;//n number of student and m is questions
	int sum=0;
	scanf("%d%d",&n,&m);
	
	char option[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			scanf(" %c",&option[i][j]);
		
	}
	int marks[m];
	
	
	
	for(int i=0;i<m;i++)
		scanf("%d",&marks[i]);
	
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++){
			if(option[j][i]=='A')
			a++;
			
			else if(option[j][i]=='B')
				b++;
			else if(option[j][i]=='C')
				c++;
			else if(option[j][i]=='D')
				d++;
			else if(option[j][i]=='E')
				e++;
			
		}
		
		if(a>=b)
			max1=a;
		else 
			max1=b;
		
		if(c>=d)
			max2=c;
		else
			max2=d;
			
			
		if(max1>=max2)
			max=max1;
		else  
			max=max2;
		
		
		if(max<e)
			max=e;
		
		
		a=0;b=0;c=0;d=0;e=0;
		sum=sum+(max*marks[i]);
		
		
		}printf("%d",sum);
	return 0;
}