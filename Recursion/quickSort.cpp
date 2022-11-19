#include <bits/stdc++.h>
using namespace std;

int partation(int *arr, int start, int end)
{

  int num = arr[start];

  // finding its right position
  int pos = 0;
  for (int i = start+1; i < end; i++)
  {
    if (arr[i] <= num)
    {
      pos++;
    }
  }
  pos = start+pos;
  swap(arr[start], arr[pos]);

  int i = start;
  int j = end;
  while (i < pos && j > pos)
  {
    while(arr[i] > arr[pos])
      i++;
    while(arr[j] < arr[pos])
      j--;

    if(i < pos && j > pos)
      swap(arr[i++],arr[j++]);
  }

  return pos;
}
void quickSort(int *arr, int start, int end)
{
  if (start >= end)
    return;

  int pivotPoint = partation(arr, start, end);
  quickSort(arr, start, pivotPoint - 1);
  quickSort(arr, pivotPoint + 1, end);
}
int main()
{
  int arr[]= {5,3,32,6,8,9,45,6,4,3,254,100};
  int length = 12;
  quickSort(arr,0,length);
  for (int i = 0; i < 12; i++)
    cout << arr[i]<<" ";
  cout << endl;
  return 0;
}