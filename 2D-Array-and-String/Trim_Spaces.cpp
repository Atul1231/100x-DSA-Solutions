#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    getline(cin,s1);
    string new_string;

    for(char &c:s1){
        if(c!= ' '){
            new_string+=c;
        }
    }

    cout<<new_string;
}