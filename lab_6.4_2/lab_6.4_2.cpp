// lab_6.4_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
#include <iostream>
using namespace std;

// Function to calculate the
// product of array using recursion
int product(int a[], int n)
{
    // Termination condition
    if (n % 2== 0)
        return(a[n]);
    else
        return (a[n] * product(a, n - 1));
}
int sum(int arr[], int n)
{
   
    // base case
    if (n == 0) {
        return 0;
    }
    else {
        // recursively calling the function
        return arr[0] + sum(arr + 1, n - 1);
    }
}
void Rotate(int arr[], int first, int last) {
    while (first < last) {
        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        last--;
    }
}
void Rearrangement(int arr[], int first, int last) {
    if (first == last) {
        return;
    }
    Rearrangement(arr, (first + 1), last);
    if (arr[first] >= 0) {
        Rotate(arr, (first + 1), last);
        Rotate(arr, first, last);
    }
}
int main()
{

    int n, x;
    cout << "Enter the number of items:" << "\n";
    cin >> n;
    int* arr = new int(n);
    cout << "Enter " << n << " items" << endl;

    for (x = 0; x < n; x++) {
        cin >> arr[x];
    }
    int k = n;
    int size = n;
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            temp++;
            Rearrangement(arr, 0, (size - 1));
            Rotate(arr, temp, (size - 1));
        }
    }
    cout <<"Sum of given array is " <<  sum(arr, n) << endl;
    cout << "Product of given array is " << product(arr, k-1) << endl;
    cout << "Rearrangement of positive and negative numbers using Recursion is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
   

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
