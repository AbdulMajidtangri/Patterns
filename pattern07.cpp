#include<iostream>
using namespace std;
int main (){
 	int n;                                           
	cout<<"Enter the number of row";
	cin>>n;
		int m;
//	cout<<"Enter the number of col";
//	cin>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
	{   if(i==j||i+j==n+1)
		cout<<"*";
		else cout<<" ";
	}cout<<endl;
	}
	return 0;
}
	
