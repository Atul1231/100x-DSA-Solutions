#include<bits/stdc++.h>

using namespace std;

int main(){
    char ch;
    cin>>ch;
    if ((int)ch>=48 and (int)ch<=57)
    {
        cout<<"Digit";
    }
    else if((int)ch>=65 and (int)ch<=90)
    {
        cout<<"Uppercase";
    }    
    else if((int)ch>=97 and (int)ch<=122)
    {
        cout<<"Lowercase";
    }else
    {
        cout<<"Special";
    }
}