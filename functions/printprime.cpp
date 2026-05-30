#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    if(n < 2){
        return 0;
    }

    for(long long i=2; i*i<=n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return true;
}

int main(){
    long long n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if(is_prime(i)){
            cout<<i<<"\t";
        }
    }
    
}

