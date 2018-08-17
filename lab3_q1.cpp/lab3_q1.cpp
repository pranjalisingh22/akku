// include library
# include <iosteram>
using namespace std;
// main function
int main() {
int sizeint; //declaration
sizeint = sizeof (int); // intialization
cout << "The size of integer is " << sizeint << " bytes" << endl; //prints on terminal
int sizefloat;
sizefloat = sizeof (float);
cout << "The size of float is " << sizefloat << " bytes" << endl;
int sizedouble;
sizedouble = sizeof (double);
cout << "The size of double is " << sizedouble << " bytes" << endl;
int sizechar;
sizechar = sizeof (char);
cout << "The size of character is " << sizechar << "bytes" << endl;
int sizeboolean;
sizebollean = sizeof (bool);
cout << "The size of boolean is " << sizeboolean << "bytes" << endl;
return 0;
}
