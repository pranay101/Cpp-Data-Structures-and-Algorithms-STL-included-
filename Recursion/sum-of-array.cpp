#include <bits/stdc++.h>
using namespace std;

int sum(int *arr, int size)
{
    if (size == 0)
        return 0;
    if (size == 1)
        return arr[0];

    int remaining = sum(arr + 1, size - 1);
    int sumi = arr[0] + remaining;
    return sumi;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5 };
    int size = 5;
    cout << "Array right now:" << endl;

    for (int i = 0; i < size; i++)
        cout << arr[i]<<" ";

    int sumi = sum(arr, size);
    cout << "The sum of array is: " << sumi << endl;

    return 0;
}