#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	/* l is lower index and r is last index*/
	
	int a[20],l=0, r, Search,i,m,N;
	
	cout<<"Enter a range: ";
	cin>>N;
	
	r=N-1; //help in line no 25 while(l<=r)
	cout<<"Enter " <<N<<" Numbers: ";
	for(i=0;i<N;i++)
	{
		cin>>a[i];
	}
	
	cout<<"Enter a number that you want to search: ";
	cin>>Search;
	
	while(l<=r)
	{
		// l is first indexing or zero index
		// r is last indexing or laast index
		
		m=(l+r)/2;
		if(a[m]==Search) // m is index
		{
			cout<<"Number is Found at position "<< m+1; // m+1 say real position ie position 7 have index 6
			break;
		}
		else if(a[m]>Search) //- The middle element is greater than the number we're searching for
		{
			r=m-1; // so last index is nowshift to last of whole  to  last of left hall of array 
		}
		else if(a[m]<Search)   //- This means: "The middle element is less than the number we're searching for
		{
			l=m+1;  // so first index shift from whole array  to   first of right hall
		}
	}
	if(l>r)
	{
	 cout<<"Number is not found";
	}
	getch();
	return 0;
}