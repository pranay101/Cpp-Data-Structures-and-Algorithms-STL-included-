#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr, int start, int end, int item)
{
    if (start >= end)
        return false;

    int mid = (start + end) / 2;
    if (arr[mid] == item)
        return true;
    else
    {

        if (arr[mid] > item)
            return binarySearch(arr, start, mid-1, item);
        else
            return binarySearch(arr, mid+1, end, item);
    }
}
int main()
{
    int arr[10] = {13, 24, 37, 49, 56, 61, 72, 83, 96, 100};
    int item = 1000;
    int size = 10;
    int start = 0;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    bool searchResult = binarySearch(arr, start, size, item);
    if (searchResult)
        cout << "Present" << endl;
    else
        cout << "Absent" << endl;
    return 0;
}