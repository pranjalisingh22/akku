#include<iostream>
using namespace std;
//the minimum function
void mining(int&min ,int vr1, int vr2 )
{
	//checking which variable is small
	if(vr1<vr2)
	//putting the smaller variable into the reference variable
	{min=vr1;}
	else
	{min=vr2;}
}
//the main function
int main()
{
	//declaring variables
	int min,a,b;
	//asking for input
	cout<<"enter the numbers:-"<<endl;
	//taking input
	cin>>a>>b;
	//calling the minimuming function
	mining(min,a,b);
	//outputting
	cout<<"The smaller of the two numbers is:-"<<min;
	return 0;
}