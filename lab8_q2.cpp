#include <iostream>
using namespace std;
int largest (int [], int);
int smallest (int [], int);
float mean (int[], int);
float median (int[], int);
void mostFrequent (int [], int);
int main()
{
    int n;
    cout << "Enter the size of the array:\t";
    cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "\nLargest element: " << largest(arr,n) << endl;
    cout << "\nSmallest element: " << smallest(arr,n) << endl;
    cout << "\nMean element: " << mean(arr,n) << endl;
    cout << "\nmedian element: " << median(arr,n) << endl;
    mostFrequent(arr,n);
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
float mean (int arr[], int n)
{
    float sum = 0;
    for (int i = 0; i< n; i++)
    {
        sum+=arr[i];
    }
    return sum/n;
}
float median (int arr[], int n)
{
    for (int i = 0; i<n-1; i++)
    {
        for (int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i<n;i++)
        cout << arr[i] << endl;
    if (n%2 == 0)
        return (float)(arr[n/2]+arr[n-2])/2;
    else
        return arr[(n-1)/2];
}
void mostFrequent (int arr[], int n)
{
    int mode = 0;
    int modeFrequency = 1;
    for (int i = 0; i < n; i++)
    {
        int frequency = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j]==arr[i])
                frequency++;
        }
        if(frequency > modeFrequency)
        {
            mode = arr[i];
            modeFrequency = frequency;
        }
    }
    if (modeFrequency == 1)
        cout << "\nAll the entries are equally frequent.";
    else
        cout << "\nThe most frequent entry is " << mode;
}