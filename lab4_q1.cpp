//include the library
#include <iostream> 
using namespace std;
//write the function
int main (){
//declaring the variable
float length;
//asking for the input value
cout << " what is length of object in centimeter? ";
//reading the variable
cin >> length;
//converting the input and showing the result
cout << " this length is equal to " << length/100 << "meters" << endl;
cout << "this length is equal to " << length/100000 << " kilometers ";
//ending
return 0;
}
