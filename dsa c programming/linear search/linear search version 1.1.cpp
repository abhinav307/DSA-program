//write a program to search using linear search create user function


#include <stdio.h>
#include <conio.h>


void LinearSearch(int a[],int r, int search){
	int i,k=0;
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
}

int main()
{
	int i, a[100]/*={55,6,34,1,81,9,2,3,1,89}*/, search;
	int r;
	
	printf("Enter a range: ");
	scanf("%d",&r);
	printf("Enter %d numbers: ", r);
	for(i=0;i<r;i++){
		scanf("%d",&a[i]);
	}   
	
	printf("Enter a number that you want to search: ");
	scanf("%d", &search);
	
	LinearSearch(a,r,search);
	

	getch();
	return 0;
	}