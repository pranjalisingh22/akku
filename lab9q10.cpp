#include <iostream> //Including the library

using namespace std;

//A function to reverse a string
void revString(char* p)
{
 int rev;
 int count = 0;
 
 for(int i = 0; (*(p + i)) != '\0'; i++) //Loop to find the size of array
 {
  count++;
 }
 rev = count - 1;
 
 for(int j = rev; j >= 0 ; j--) //Loop to print values from the last term
 {
  cout <<*(p + j);
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
 cout <<"Enter elements of array" <<endl;
 cin >>array;
    
 char* p = &array[0];
 revString(p);
 return 0;
}
//The program ends
