//calculating the lcm of given two numbers
#include<iostream>			//including the library 
using namespace std;		//defining the use of cout function
void f(int a, int b,int i)	//defining the function
{
	/*take one by one the multiple of the smaller number and 
	check whether it is divisible by the larger number
	the logic that is used: lcm(a,b)>=max(a,b)*/
	if ((b*i)%a==0)			//exit condition
	{
		cout<<"the lcm of the given numbers is: "<< b*i;
	}
	else
	{
			i++;
		f(a,b,i);			//tailend recursion
	}
}
 int main()
 {
 	int a,b;				//declaring and assigning variables
 	cout<<"please enter the value of a(a>b): ";
 	cin>>a;
 	cout<<"please enter the value of b: ";
 	cin>>b;
 	
 	f(a,b,1);
 	return 0;
 }

   

