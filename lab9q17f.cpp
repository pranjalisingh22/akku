#include <iostream>//include library
using namespace std;

// returns true if X and Y are same
int compare(const char *str1, const char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return 0;
		str1++;
		str2++;
	}

	return (*str2 == '\0');
}

// Function to implement strstr() function
const char* strstr(const char* str1, const char* str2)
{
	while (*str2 != '\0')
	{
		if ((*str1 == *str2) && compare(str1, str2))
			return str1;
		str2++;
	}

	return NULL;
}

// Implement strstr function in C++
int main()
{
	char str1[50];
	cout<<"Enter string1:"<<endl;
	cin.getline(str1,50);
	char str2[50];
	cout<<"Enter string2:"<<endl;
        cin.getline(str2,50);
	cout<< strstr(str1, str2);

	return 0;
}
