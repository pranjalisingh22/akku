#include <iostream> //Including the library

using namespace std;

int main() //The main function
{
 char s[10] = "abcde"; 
 char* cptr;
 
 cout<<"Given array" <<endl;
 cout <<s <<endl;

 cptr = s; //Pointing to the array
 cout <<"Array in reverse" <<endl;
 for (int i = 10; i >= 0; i--) //Loop to print characters in reverse order
 {
  cout <<*(cptr + i);
 }
 cout <<endl;
 return 0;
}
//The program ends
