#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1;
    cin>>s1;
    char c1,c2;
    cin>>c1>>c2;
    
    for(char &c:s1){
        if (c==c1)
        {
            c=c2;
        }
    }
    cout<<s1;
}