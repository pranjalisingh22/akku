//sum of all numbers from to b
#include<iostream>			//declaring libraries
#include<cmath>
#include<cstring>
using namespace std;		//defining the use of cout function
int sum(int i,int n,int z)	//declaring function
{
	/* the algorithm used here is that we shall add initial value to the temporary variable, then increment the value 
	and then repeat the process. obviously the exit condition is the if logical structure. 
	also the initial value of the temporary variable must be the additive identity 0 */
	if(i<=n)				//exit condition
	{
		z =z +i;
		i++;
		sum(i,n,z);			//tailend recursion
	}
	else
	{
		return z;
	}
}

int main()					//declaring the main function
{
	int i,n;
	cout<<"please enter the intiator: ";
	cin>>i;
	cout<<"please enter the exit number: ";
	cin>>n;
	cout<<"the sum of numbers between "<<i<<" & "<<n<<" is: "<<sum(i,n,0);
}
