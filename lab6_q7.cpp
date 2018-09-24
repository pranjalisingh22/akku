#include<iostream>
using namespace std;
//the function for going from small character to capital character
char toUpper(char small)
{
	//going capital
	small-=32;
	//returing the capital character
	return small;
}
//the function for going from capital character to small character
char toLower(char big)
{
	//going small
	big+=32;
	//returning the small character
	return big;
}
//the main function
int main()
{
	//declaring variable
	char character;
	//asking for input
	cout<<"Enter the character"<<endl;
	//taking input
	cin>>character;
	//checking if the character is capital
	if(character>=65 && character<=90)
	{
		//calling the toLower function and outputing
		cout<<toLower(character)<<endl;
	}
	//checking if the character is small
	else if(character>=97 && character<=122)
	{
		//calling the toUpper function and outputting
		cout<<toUpper(character)<<endl;
	}
	//just in case the character given is not a variable
	else
	{
		cout<<"Your character is not a alphabet"<<endl;
	}
	return 0;
}