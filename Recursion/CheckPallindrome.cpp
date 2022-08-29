#include<bits/stdc++.h>
using namespace std;

bool checkPallindrom(string& str, int start,int size){
    if(start == size/2)
        return true;
    if (str[start] != str[size-start-1])
        return false;
    
    return checkPallindrom(str,start+1,size);
}
int main()
{
    string one = "pranay";
    string two = "aabbaa";

    if(checkPallindrom(two,0,two.length()))
        cout<<"yes";
    else
        cout <<"No";

    return 0;
}