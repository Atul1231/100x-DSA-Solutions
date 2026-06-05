#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num;
    cin>>n>>num;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==num){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}