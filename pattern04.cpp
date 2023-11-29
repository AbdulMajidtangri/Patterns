#include<iostream>
using namespace std;
int main (){
	int n;
	cout<<"Enter the number of row";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
	{  if(i==3 ||j==3)
		cout<<"*";//	cout<<j;
   else  cout<<" ";
	}cout<<endl;
	}
	return 0;
}
	
