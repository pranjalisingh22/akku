#include <iostream> //Including the library

using namespace std;

int main() //The main function
{
 int array[10]; //Creating an array of size 10
 cout <<"Enter the ten elements of the array" <<endl;
 for (int x = 0; x < 10; x++)
 {
  cin >>array[x];
 }
 
//Printing the array using normal index method
 cout <<"Printing the elements using normal index method" <<endl;
 for (int i = 0; i < 10; i++)
 {
  cout <<array[i] <<", ";
 }
 cout <<endl;
    
//Printing the array using pointer method
 cout <<"Printing the elements using pointer method" <<endl;
 int* p = &array[0];
 for (int j = 0; j < 10; j++)
 {
  cout <<*(p + j) <<", ";
 }
 cout <<endl;
 return 0;
}
