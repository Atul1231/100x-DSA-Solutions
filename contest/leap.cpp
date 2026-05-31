#include<iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    if(n % 100==0 && n % 400 == 0){
        cout<<"Yes";
    }
    else if(n % 100!=0){
        if(n%4==0){
            cout<<"Yes";
        }
        else {
            cout<<"No";
        }
    }
    else{
        cout<<"No";
    }
    
}