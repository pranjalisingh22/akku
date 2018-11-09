#include <iostream> //Including the library

using namespace std;

//A function to receive an integer array and its size, and print the even elements
int countEven(int* p,int size)
{
 int count = 0;

//Loop to check if an element is even or not
 for(int i = 0; i < size; i++) 
 {
  if(*(p + i) % 2 == 0) 
  {
   count++; //To count the number of even elements
  }
 }
 return count;
}

//The main function
int main()
{
 int size;
 cout <<"Enter size of the array"<<endl;
 cin >>size;
 int array[size];
 cout<<"Enter the elements of the array"<<endl;
 
 for(int i = 0; i < size; i++)
 {
  cin >>array[i];
 }
 int* p = &array[0]; //Pointing to array
 cout<<"There are " <<countEven(p,size) <<" even numbers in the given array" <<endl; //Calling the function
 return 0;
}
