#include<bits/stdc++.h>
using namespace std;


void ReverseString(string& str,int start, int size){
    if(start >= size/2){
        return;
    }
    swap(str[start],str[size-start-1]);
    ReverseString(str,start+1,size);

}
int main()
{
    string name = "pranay";
    cout <<"Before Reverse: "<<name<<endl;
    ReverseString(name,0,name.length());

    cout <<"After Reverse: "<<name;
    return 0;
}