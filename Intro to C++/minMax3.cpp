#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b & a>c & b>c ){
        cout<<"Min = "<<c<<"\n";
        cout<<"Max = "<<a;
    }
    else if(a>b & a>c & c>b ){
        cout<<"Min = "<<b<<"\n";
        cout<<"Max = "<<a;
    }
    else if(b>a && b>c && a>c){
        cout<<"Min = "<<c<<"\n";
        cout<<"Max = "<<b;
    }
    else if(b>a && b>c && c>a){
        cout<<"Min = "<<a<<"\n";
        cout<<"Max = "<<b;
    }
    else if(c>a && c>b && a > b){
        cout<<"Min = "<<b<<"\n";
        cout<<"Max = "<<c;
    }
    else{
        cout<<"Min = "<<a<<"\n";
        cout<<"Max = "<<c;
    }
}