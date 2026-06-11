#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    getline(cin,s1);
    int count = 0;

    for(char &c:s1){
        if(c == ' '){
            count++;
        }
    }

    cout<<count+1;
}