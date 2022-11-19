#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int key, n)
{
    int start = 0;
    int end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
            return key;
        else if(arr[mid] > key)
            start = mid+1;
        else
            end = mid-1;
    }

    return start;
}

void insertionSort(int *arr, int n)
{
    if (n == 0 || n == 1)
        return;
}
int main()
{
    return 0;
}