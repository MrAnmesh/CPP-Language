// Square pattern printing by taking input:

#include<iostream>
using namespace std;

int main()
{
	int n;
  cout<<"Enter how many rows and columns you want: ";
	cin>>n;
	
	for(int row=0;row<n;row++)
	{
		for(int col=0;col<n;col++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
