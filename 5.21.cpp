#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <=i; j++)
		cout<<"*";
		for (int j = i+1; j <= 10; j++)
		cout<<" ";
		cout<<" ";
		
		
		for (int j = 1; j <= (11-i); j++)
		cout<<"*";
		for (int j = 1; j<= (11-i); j++)
		cout<<" ";
		cout<<" ";
		
		
		for (int j =1; j < i; j++)
		cout<<" ";
		for (int j = i; j <=10; j++)
		cout<<"*";
		cout<<" ";
		
		
		for (int j = 1; j < (11-i); j++)
		cout<<" ";
		for (int j = (11-i); j<=10; j++)
		cout<<"*";
		cout<<endl;
			}
			cout<<endl;    	
}
