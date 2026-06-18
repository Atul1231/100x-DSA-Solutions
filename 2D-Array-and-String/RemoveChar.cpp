#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    cin >> s1;

    char c1;
    cin >> c1;
    string new_string;

    for(char &c:s1){
        if(c!=c1){
            new_string+=c;
        }
    }

    cout<<new_string;
}