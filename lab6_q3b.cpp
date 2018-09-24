#include<iostream>
using namespace std;
//the maxxing function
void maxing(int&max ,int vr1, int vr2 )
{
	//finding the bigger number
	if(vr1>vr2)
	//putting the bigger variable  into the reference variable
	{max=vr1;}
	else
	{max=vr2;}
}
//the main function
int main()
{
	//declaring variables
	int max,a,b;
	//asking for input
	cout<<"enter the numbers:-"<<endl;
	//taking input
	cin>>a>>b;
	//calling the max function and giving max as reference variable
	maxing(max,a,b);
	//outputing
	cout<<"The bigger of the two numbers is:-"<<max;
	return 0;
}