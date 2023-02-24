#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the value of a : ";
	cin>>a;
	cout<<"Enter the value of b : ";
	cin>>b;
	if(a==b)
	   cout<<"a is equal to b";
	else
	   (a>b)?cout<<"a is greater than b":cout<<"b is greater than a";
}
