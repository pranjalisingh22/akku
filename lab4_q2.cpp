//program to enter a temperature in celcius and converting it into fahrenheit
//including library
# include <iostream>
using namespace std;
// including the function
int main () {
//declaring the variables
float b;
//asking for the value
cout << "please enter a temperature in celcius:";
//reading the variable
cin >> b;
cout << "the value you entered is " << b;
//calculate the inputs and show result
cout << " and its value in fahrenheit is " << (b*1.8)+32 << "c" <<".\n";
//end
return 0;
}
