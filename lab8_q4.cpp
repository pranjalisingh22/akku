#include <iostream>
using namespace std;
int largest (int [], int);
int smallest (int [], int);
int main ()
{
    int n1, n2;
    cout << "Enter the size of the first array:\n";
    cin >> n1;
    cout << "Enter the size of the second array:\n";
    cin >> n2;
    int arr1[n1];
    int arr2[n2];
    cout << "Enter the elements of the first array:\n";
    for (int i = 0; i < n1; i++)
    {
        cout << "Enter element " << i+1 << ":\t";
        cin >> arr1[i];
    }
    cout << "\nEnter the elements of the second array:\n";
    for (int i = 0; i < n2; i++)
    {
        cout << "Enter element " << i+1 << ":\t";
        cin >> arr2[i];
    }
    int n3 = n1+n2;
    int arr3[n3];
    for (int i = 0; i<n3; i++)
    {
        if (i < n1)
            arr3[i] = arr1[i];
        else
            arr3[i] = arr2[i-n1];
    }
    for(int i = 0; i<n3; i++)
        cout << arr3[i] << endl;
    cout << "\nThe largest element in the merged array is:\t" << largest(arr3, n3);
    cout << "\nThe smallest element in the merged array is:\t" << smallest(arr3, n3);
}
int largest (int arr[], int n)
{
    int big = arr[0];
    for (int i = 0; i<n-1; i++)
    {
        if(arr[i] > big)
            big = arr[i];
    }
    return big;
}
int smallest (int arr[], int n)
{
    int small = arr[0];
    for (int i = 0; i<n; i++)
    {
        if(arr[i] < small)
            small = arr[i];
    }
    return small;
}