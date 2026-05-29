#include<bits/stdc++.h>
using namespace std;
int Hcf(int a,int b){
    if(b==0){
        return a;
    }
    return Hcf(b,a%b);
    
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<Hcf(a,b);
}