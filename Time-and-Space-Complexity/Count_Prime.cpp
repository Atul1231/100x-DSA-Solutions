#include <bits/stdc++.h>
using namespace std;

bool prime(long long a){
    if (a <= 1) {
        return false;
    }
    for (long long i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long n , count=0;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        if(prime(i)){
            count++;
        }
    }
    cout<<count;
}