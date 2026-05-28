#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    if(n>m){
        cout<<"Min = "<<m<<"\n";
        cout<<"Max = "<<n;
    }
    else{
        cout<<"Min = "<<n<<"\n";
        cout<<"Max = "<<m;
    }
}