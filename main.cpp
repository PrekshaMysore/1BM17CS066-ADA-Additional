#include <iostream>
using namespace std;
  


int main() 
{ 
    int a[20],i,n,k ; 
    cout<<"enter the no. of elements";
	cin>>n;
	cout<<"enter the elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter element to be searched";
	cin>>k;
	for(i=0;i<n;i++)
	{
		if(k==a[i])
		{
			cout<<"1";
			break;
		}
		if(i==a[n]-1)
			cout<<"-1"<<endl;
			
	}

			
    return 0; 
} 