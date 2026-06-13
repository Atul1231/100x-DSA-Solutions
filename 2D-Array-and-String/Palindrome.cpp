#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string reverse;
    reverse=s;
    int n = reverse.length();
    for (int i = 0; i < n / 2; i++) {
        char temp = reverse[i];
        reverse[i] = reverse[n - i - 1];
        reverse[n - i - 1] = temp;
    }
    if (reverse == s){
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}