#include<stdio.h>

int main()
{
	int a[100],N;
	int p,s,index,temp,min;
	printf("Enter a range: ");
	scanf("%d", &N);
	printf("Enter %d numbers: ", N);
	for(p=0;p<N;p++)
	{
		scanf("%d",&a[p]);
	}
	
	for(p=0;p<N-1;p++)
	{	
		for(s=p+1;s<N;s++)
		{
			if (a[p]>a[s])
			{
				temp = a[p];
				a[p]  = a[s];
				a[s] = temp;
			}
			
		}
		
	}
	printf("After Sorting \n");
	for(p=0;p<N;p++)
	{
		printf("%d ",a[p]);
	}
}