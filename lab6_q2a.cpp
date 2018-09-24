#include<iostream>
using namespace std;
//the function for adding
int summing(int vr1, int vr2 )
{
	//returing the sum
	return (vr1+vr2);
}
//the main function
int main()
{
	//declaring variables
	int a,b;
	//asking for input
	cout<<"enter the numbers:-"<<endl;
	//taking input
	cin>>a>>b;
	//giving output while calling the summing function for summing
	cout<<"The sum of the two numbers is:-"<<summing(a, b);
	return 0;
}