#include <iostream> //Including the library

using namespace std;

//A function to find the length of string
int myStrLen(char* p)
{
 int count = 0;
 for(int i = 0; *(p + i) != '\0'; i++) //Loop to find the length
 {
  count++;
 }
 return count;
}

//The main function 
int main()
{
 int size;
 cout <<"Enter size of array" << endl;
 cin >>size;
 
 char array[size];
 cout <<"Enter the string" <<endl;
 cin >>array;
 
 char* p = &array[0];
 cout <<"Length of the string is " <<myStrLen(p) <<endl;
 return 0;
}
