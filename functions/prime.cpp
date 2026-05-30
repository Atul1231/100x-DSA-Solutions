#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    if(n < 2){
        cout<<"Not Prime";
        return 0;
    }

    for(long long i=2; i*i<=n; i++){
        if(n%i==0){
            cout<<"Not Prime";
            return 0;
        }
    }

    cout<<"Prime";
}