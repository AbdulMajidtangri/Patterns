#include<iostream>
using namespace std;
int main (){
 	int n;                                           
	cout<<"Enter the number of row";
	cin>>n;
//		int m;
//	cout<<"Enter the number of col";
//	cin>>m;
	for(int i=1;i<=n;i++)
	{		
		for(int k=1;k<=n-i;k++)
		{
			cout<<" ";
	}
			for(int j=1;j<=i;j++)
		{
			cout<<"*";
	}

	cout<<endl;
	}
	return 0;
}
	
