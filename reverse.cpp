#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n , ori , rem , rev = 0;
    
    cout<<"Enter a number : ";
  
    cin>>n;
    
    ori = n;
    
    while(n>0)
    {
    	rem = n % 10;
    	rev = rev*10 + rem;
    	n /= 10;
    }
  
    cout<<"\nReverse of "<<ori<<" : "<<rev;
  
    return 0;
}
