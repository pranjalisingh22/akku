//include library
#include <iostream>
using namespace std;

//main function
int main()
{
int a,b,sum,subtract,product,divison,remainder ; // declaration
a = 4;
b = 8;
sum = a + b; // adds 2 numbers
subtract = a - b; // calculates the difference
product = a * b; // calculates the product
divison = a / b; // divides the number 
remainder = a % b; 
cout << "numbers are " << a << b << endl;
cout << "results in in " << a << b << endl;
cout << "sum is " << sum << endl;
cout << "difference is " << subtract << endl;
cout << "product is " << product << endl;
cout << "quotient is " << divison << endl;
cout << "remainder is " << remainder << endl;
return 0;
}
