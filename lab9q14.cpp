#include <iostream> //Including the library

using namespace std;

//A program to print the name of user using different ways
int main() //The main function
{
 char name[20];
 cout <<"Enter your name"<<endl;
 cin.getline(name, 20);

//Printing the name using normal index method
 cout <<"Printing the name using normal index method" <<endl;
 for(int i = 0; i < 20; i++)
 {
  cout <<name[i];
 }
 cout <<endl;
    
//Printing the name using pointer method
 cout <<"Printing the name using pointer method"<<endl;
 char* p = &name[0];
 for(int i = 0; i < 20; i++)
 {
  cout <<*(p + i);
 }
 cout <<endl;
 return 0;
}
