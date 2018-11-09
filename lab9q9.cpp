#include <iostream> //Including the library

using namespace std;
 
bool functionContainsChar(char* p,char c)
{
 char t = '\0';
 for (int i = 0; *(p + i) != '\0'; i++) //Loop to check each character of the string
 {
  if (*(p + i) == c) //Conditional loop to check whether the character of the string is same as the given characteror not
  { 
   t = *(p + i); //Assigning the value to new variable
  }
 }

//Conditional loop to check whether the value of teh variable is null or not
 if(t != '\0') 
 {  
  return true;
 } 
 else
 {
  return false;
 } 
 cout <<endl;
}

//The main function
int main()
{
 int size;
 cout <<"Enter size of array" <<endl;
 cin >>size;
 
 char array[size]; 
 cout <<"Enter the elements of array"<<endl;
 cin >>array;
 
 char c;
 cout <<"Enter the character you want to find in the array"<<endl;
 cin >>c;
 
 char* p = &array[0];
 cout <<functionContainsChar(p,c);
 return 0;
}
