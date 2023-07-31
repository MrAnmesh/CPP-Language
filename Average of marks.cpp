#include<iostream>
using namespace std;

int main()
{
	int Eng, Mth, SST, Phy, Chem,Avg_marks;
	cout<<"Enter the Marks of Eng:";
	cin>>Eng;
	
	cout<<"Enter the Marks of Mth:";
	cin>>Mth;
	
	cout<<"Enter the Marks of SST:";
	cin>>SST;
	
	cout<<"Enter the Marks of Phy:";
	cin>>Phy;
	
	cout<<"Enter the Marks of Chem:";
	cin>>Chem;
	
	Avg_marks= (Eng+Mth+SST+Phy+Chem)/5;
	
	cout<<"\nAverage of all Marks will be="<<Avg_marks;
}
