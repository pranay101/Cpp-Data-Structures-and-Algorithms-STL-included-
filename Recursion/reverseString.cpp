#include<bits/stdc++.h>
using namespace std;


void ReverseString(string& str,int start,int end){
    if(start >= end){
        return;
    }
    swap(str[start],str[end]);
    ReverseString(str,start+1,end-1);

}
int main()
{
    string name = "pranay";
    cout <<"Before Reverse: "<<name<<endl;
    ReverseString(name,0,5);

    cout <<"After Reverse: "<<name;
    return 0;
}