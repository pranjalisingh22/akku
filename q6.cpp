//printing the sum of digits of any number.
#include<iostream>			//including library
using namespace std;		//defining use of cout dunction
void f(int n,int z)			//defining function
{
	/*as long as n is not 0 divide n by 10 and add the remainder to a temporary variable
	also discard the decimal part of n after dividing */
	if(n!=0)				//exit condition
	{
	z= z+ (n%10);
	n = n/10;
	f(n,z);					//tailend recursion
	}
	else
	{
		cout<<"the sum of digits of given number is: "<<z;//printing the output
	}
}
int main()
{
	int n;
	cout<<"please enter the number: ";
	cin>>n;
	f(n,0);
	return 0;
}
