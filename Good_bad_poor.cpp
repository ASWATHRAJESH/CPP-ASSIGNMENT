#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int M;
	
	cout<<"Enter the value of M : ";

      cin>>M;
	
	if(M%3==0 && M%5==0)
	    cout<<"\n"<<M<<" is a Good Number";
	else if(M%3==0 && M%5!=0)
	    cout<<"\n"<<M<<" is a Bad Number";
	else if(M%5==0 && M%3!=0)
	    cout<<"\n"<<M<<" is a Poor Number";
	else
	    cout<<"\n"<<M<<" is not a good , bad and also poor number so "<<-1;
	    
	return 0;
}
