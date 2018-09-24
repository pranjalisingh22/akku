#include<iostream>
using namespace std;
//the summing function
int summing(int&sum ,int vr1, int vr2 )
{
	//adding and putting the value into the reference function
	sum=vr1+vr2;
}
//the main function
int main()
{
	//declaring variables
	int add,a,b;
	//asking for input
	cout<<"enter the numbers:-"<<endl;
	//taking input
	cin>>a>>b;
	//calling the sum function
	summing(add,a,b);
	//output
	cout<<"The sum of the two numbers is:-"<<add;
	return 0;
}