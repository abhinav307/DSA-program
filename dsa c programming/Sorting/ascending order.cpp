#include <stdio.h>

int main()
{	
	int a[1000];
	int i,j,temp,N;
	printf("Enter a range: ");
	scanf("%d",&N);
	printf("Enter %d numbers: ",N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("After sorting:\n");
	for(i=0;i<N;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}