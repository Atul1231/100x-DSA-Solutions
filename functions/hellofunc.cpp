#include<bits/stdc++.h>
using namespace std;

void hello(int n){
    if(n!=0){
    cout<<"I am learning functions"<<"\n";
    return hello(n-1);
    }
    return;
}
int main(){
    int n;
    cin>>n;
    hello(n);
}
