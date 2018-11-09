#include <iostream> //Including the library

using namespace std;

//A program to declare variables of all pre-defined sizes and pointers and print the size of each
int main() //The main function
{

//Declaring the variables and pointers
 int i; int *pi;
 char c; char *pc;
 float f; float *pf;
 double d; double *pd;
 bool b; bool *pb;
   
//Printing the size of the variables and the pointers
 cout <<"The sizes of the data types and their pointers are as follows: " <<endl;
 cout <<"int = " <<sizeof(i) <<"; int pointer = " <<sizeof(pi) <<endl;
 cout <<"char = " <<sizeof(c) <<"; char pointer = " <<sizeof(pc) <<endl;
 cout <<"float = " <<sizeof(f) <<"; float pointer = " <<sizeof(pf) <<endl;
 cout <<"double = " <<sizeof(d) <<"; double pointer = " <<sizeof(pd) <<endl;
 cout <<"boolean = " <<sizeof(b) <<"; boolean pointer = " <<sizeof(pb) <<endl;
 return 0; 
}
//The program ends
