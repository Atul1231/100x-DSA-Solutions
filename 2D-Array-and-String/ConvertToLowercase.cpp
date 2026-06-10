#include<bits/stdc++.h>

using namespace std;

int main(){
    char ch;
    cin>>ch;
    if ((int)ch>=65 and (int)ch<=90)
    {
        ch+=32;
        cout<<ch;
    }
    else{
        cout<<ch;
    }
}