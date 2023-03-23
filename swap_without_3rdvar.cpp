#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int a, b;
	
	cout<<"Enter a : ";
	cin>>a;
	
	cout<<"Enter b : ";
	cin>>b;
	
	cout<<"Before swapping : a -> "<<a<<"  b -> "<<b;
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	cout<<"\nAfter swapping : a -> "<<a<<"  b -> "<<b;
}
