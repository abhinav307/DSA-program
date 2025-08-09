#include <stdio.h>

void bubble_sort(int a[], int N)
{	
	int temp, i, j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j+1];
				a[j+1] = a[ j];
				a[j] = temp;
			}
		}
	}
	
	printf("After sorting:\n");
	for(i=0;i<N;i++)
	{
		printf("%d ", a[i]);
	}
}

int main()
{	
	int a[1000];
	int i,N;
	printf("Enter a range: ");
	scanf("%d",&N);
	printf("Enter %d numbers: ",N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble_sort(a,N);
	
	return 0;
}