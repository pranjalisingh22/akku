#include <iostream> //Including the library

using namespace std;

double* maximum(double* a, int size)
{
 int x;
//Arranging array in descending order
 for(int i = 0; i < size; i++)
 {
  for(int j = i + 1; j < size; j++)
  {
   if (*(a + i) < *(a + j)) 
   {
    x = *(a + i);
    *(a + i) = *(a + j);
    *(a + j) = x;
   }
  }
 }
 return a;
}

//The main function begins
int main()
{
 int size;
 cout <<"Enter size of the array" <<endl;
 cin >>size;
 double array[size];
 
 //Loop to check whether the size is zero or not and tp print he maximum
 if(size != 0)
 {
  cout <<"Enter the elements of array" <<endl;
   
  for(int i = 0; i < size; i++)
  {
   cin >>array[i];
  }
  
  double* p = &array[0];
  cout <<"Maximum value in array is " <<*maximum(p, size) <<endl;
 }
 
 else
 {
  cout <<"Size of the array is zero"<<endl;
  cout<<"NULL" <<endl;
 }
 return 0;
}
