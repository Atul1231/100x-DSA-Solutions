#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    
    
    for(char &c:s){
    if((int)c>=65 and (int)c<=90){
        c+=32;
    }else if ((int)c>=97 and (int)c<=122)
    {
        c-=32;
    }
    }
    cout<<s;
}