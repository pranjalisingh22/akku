#include <iostream> //Including the library

using namespace std;

//A program to understand the concept of pointers
int main() //The main function
{

//Declaring variables and pointer
 int a, b; 
 int *p = &a; //Pointing p to a
 b = *p; //Assigning value of *p to b

//Assigning values to the variables
 a = 2;
 b = 3;
 
//Printing the values
 cout <<"After pointing p to a" <<endl;
 cout <<"a = " <<a <<endl;
 cout <<"b = " <<b <<endl;
 cout <<"p = " <<*p <<endl;
 
 p = &b; //Pointing p to b

//Printing the values
 cout <<"After pointing p to b" <<endl;
 cout <<"a = " <<a <<endl;
 cout <<"b = " <<b <<endl;
 cout <<"p = " <<*p <<endl;
 return 0;
}
