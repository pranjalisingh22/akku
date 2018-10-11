/calculating the HCF of given two numbers
#include<iostream>				//including library 
using namespace std;			//defining use of cout function
void f(int n,int k,int i)		//defining function
{
	/*take two numbers, divide them by the one which is greater. 
	If it divides both then we have the Hcf else decrement it,repeat
	the logic used is that the hcf(a,b)<= max(a,b) */
	if ((n%i)==0 && (k%i)==0 )
	{
		cout<<"the HCF of the given numbers is : "<< i;
	}
	else
	{
		i--;
		f(n,k,i);				//tailend recursion
	}
	
}
int main()
{
	int n,k,i;					//declaring and assigning variables 
	cout<<"please enter the first number: ";
	cin>>n;
	cout<<"please enter the second number: ";
	cin>>k;
	
	if (n>k)
	{
		i=n;
	}
	else
	{
		i=k;
	}
f(n,k,i);					//function call
	return 0;
}
