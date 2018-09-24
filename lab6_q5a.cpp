#include<iostream>
using namespace std;
//the minimum function
int min(int vr1, int vr2 )
{
	//declaring variable
	int small;
	//checking which variable is small
	if(vr1<vr2)
	{small=vr1;}
	else
	{small=vr2;}
	return small;
}
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
	int a,b,c;
	//asking for input
	cout<<"enter the two numbers";
	//taking the inputs
	cin>>a;
	cin>>b;
	//asking the use what to do with the numbers
	cout<<"enter 1 for finding the smaller of the two, 2 for finding the larger of the two and 3 for adding them up";
	cin>>c;
	if(c==1)
	{cout<<"the smaller number is "<<min(a,b)<<endl;}
	else if(c==2)
	{cout<<"the larger number is "<<max(a,b)<<endl;}
	else if(c==3)
	{cout<<"the sum is "<<summing(a,b)<<endl;}
	else
	{cout<<"invalid input";}
}