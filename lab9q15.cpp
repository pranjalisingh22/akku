#include <iostream> //Including the library

using namespace std;

//A program to repeatedly shift characters of a string to right
int main() //The main function
{
 char str[20], *p;
 cout<<"Input about 10 characters of string"<<endl;
 cin >>str;

//Pointer variable refers to address of string
 p = &str[0];

//Showing string by shifting top character of string to right    
 for(int i = 0; i < 10; i++) //Loop to count the rows
 {
  for(int j = i; j <= 10; j++) //Loop to print the values
  {
   cout <<*(p + j);
  }
  cout <<endl; //Changing the row
 }
 return 0;
}
