#include <stdio.h>
#include <conio.h>
// we comment some line due to not write input again and again for testing

int main()
{
	int i, a[100]/*={55,6,34,1,81,9,2,3,1,89}*/, search;
	int k=0,r;
	
	printf("Enter a range: ");
	scanf("%d",&r);
	printf("Enter %d numbers: ", r);
	for(i=0;i<r;i++){
		scanf("%d",&a[i]);
	}   
	
	printf("Enter a number that you want to search: ");
	scanf("%d", &search);
	
	for(i=0;i<r;i++){
		if(a[i]==search){
		printf("Number is found at position %d   .....",i+1);
		k++; 
		break;
		}
	}
	if(k==0){
		printf("Number is not found");
	}
	getch();
	return 0;
	}