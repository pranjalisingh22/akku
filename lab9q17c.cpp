/* Implement your versions for the following function: 
Strlen */

#include <iostream>//include library
using namespace std;

int len(char* str)
{
	int size=0;
	while(*str!='\0')
	{
		size++;
		str++;
	}
	return size;
}
int main()
{
    //Declaring intial string
    char str[20];
    cout<<"Enter string"<<endl;
    cin.getline(str,20);
    
   //Implementation of strlen function
    cout<<"Use of strlen function"<<endl;
	char* p=str;
    cout<<"Length of str:"<<len(p)<<endl;
    
    return 0;
}
