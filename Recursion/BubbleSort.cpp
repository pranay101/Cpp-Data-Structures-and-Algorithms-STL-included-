#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int *arr,int n){
    if(n ==1 || n ==0)
        return;
    
    for(int i=0; i<n-1;i++){
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    }

    bubbleSort(arr,n-1);
}
int main()
{
    int arr[] = {8,7,5,4,3,6,8,100,5,32,4,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,len);
    for(int i=0; i <len; i++)
        cout<<arr[i]<<" ";
    
    cout<<endl;
    return 0;
}