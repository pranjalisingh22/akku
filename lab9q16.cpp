#include<iostream> //Including the library

using namespace std;

int main() //The main function
{
 char str[20], *p;
 cout<<"Input about 10 characters of string"<<endl;
 cin >>str;

//Pointer variable refers to address of string 
 p = &str[0];

//Showing string by shifting top characters of string to left   
 for(int i = 9; i >= 0; i--) //Loop to print the string starting from the last term
 {
  for(int j = i; j < 10; j++) //Loop to print the string till the last term
  {
   cout <<*(p + j);
  }
  cout <<endl;//Changing the row
 }
 return 0;
}
//The program ends

