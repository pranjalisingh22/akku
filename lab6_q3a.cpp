#include<iostream>
using namespace std;
//the function for finding the maximum
int max(int vr1, int vr2 )
{
	//declaring variables
	int big;
	//checking which variable is bigger
	if(vr1>vr2)
	{big=vr1;}
	else
	{big=vr2;}
	//returning the bigger variable
	return big;
}
//the main function
int main()
{
	//declaring the two variables
	int a,b;
	//asking for the teo numbers
	cout<<"enter the numbers:-"<<endl;
	//taking put
	cin>>a>>b;
	//calling the maxing function and outputting it at the same line
	cout<<"The bigger of the two numbers is:-"<<max(a, b);
	return 0;
}