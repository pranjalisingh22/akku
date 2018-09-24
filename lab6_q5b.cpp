#include<iostream>
using namespace std;
//the summing function
int summing(int&sum ,int vr1, int vr2 )
{
	//adding and putting the value into the reference function
	sum=vr1+vr2;
}
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
	int a,b,c,d;
	//asking for input
	cout<<"enter the two numbers";
	//taking the inputs
	cin>>a;
	cin>>b;
	//asking the use what to do with the numbers
	cout<<"enter 1 for finding the smaller of the two, 2 for finding the larger of the two and 3 for adding them up";
	cin>>c;
	if(c==1)
	{
		mining(d,a,b);
		cout<<"the smaller number is "<< d <<endl;
	}
	else if(c==2)
	{
		maxing(d,a,b);
		cout<<"the larger number is "<< d <<endl;
	}
	else if(c==3)
	{
		summing(d,a,b);
		cout<<"the sum is "<< d <<endl;
	}
	else
	{cout<<"invalid input";}
}