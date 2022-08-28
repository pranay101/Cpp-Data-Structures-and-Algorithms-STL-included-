#include <bits/stdc++.h>
using namespace std;

bool search(int *arr,int size, int item)
{
    if (0 == size)
        return false;
    if (arr[0] == item)
        return true;

    return search(arr + 1,size-1 ,item);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5 };
    int item = 10;
    int size = 5;

    for (int i = 0; i < size; i++)
        cout << arr[i]<<" ";

    bool searchResult = search(arr,size,item);
    if(searchResult)
        cout << "Present"<< endl;
    else
        cout << "Absent"<< endl;

    return 0;
}