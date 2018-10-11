//print all numbers from a to b
#include<iostream>		//declaring libraries
#include<cmath>
#include<cstring>
using namespace std;	//defining the use of cout function
int f(int i,int n)		//declaring function
{
/*the logic behind the function is it takes two inputs i.e. the start and end number. prints it incremnts it and then 
  	using tail end recursion again passes onto itself.the exit condition being the if logical structure*/
	if(i<=n)			//exit condition
	{
		cout<<i<<endl;
		i++;
		f(i,n);			//tailend recursion
	}
	
}
int main()				//main function
{
	int i,n;			//declaring variables
	cout<<"Please enter the start number: ";
	cin>>i;
	cout<<"Please enter the exit number: ";
	cin>>n;
	f(i,n);				//function call
	return 0;
}						//sejsfjjs'so timepass

