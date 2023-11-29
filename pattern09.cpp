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
	{			int a=1;
		for(int j=1;j<=n-i;j++)
		{	int d=a+64;
	char ch=(char)d;
	cout<<(char)d;
		a++;

	}

	cout<<endl;
	}
	return 0;
}
	
