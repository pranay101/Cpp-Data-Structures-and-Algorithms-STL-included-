// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>
using namespace std;
char* rev(char string[]){
    int start = 0;
    int end = strlen(string)-1;
    while(start < end){
        int temp = string[start];
        string[start] = string[end];
        string[end] = temp;
    
    start++;
    end--;
    }
    return string;
}
int main() {
   char string[100];
   cout<<"Enter a string: ";
   cin.getline(string,100);
   cout<<"Reverse of the string is: "<<rev(string);
}