#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int A[n], B[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int j = 0;

    // Copy elements in reverse order
    for(int i = n-1; i >= 0; i--)
    {
        B[j] = A[i];
        j++;
    }

    // Copy back to original array
    for(int i = 0; i < n; i++)
    {
        A[i] = B[i];
    }

    cout << "Reversed array: ";
    for(int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}