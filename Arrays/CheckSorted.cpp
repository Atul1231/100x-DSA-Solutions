#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        if(i+1<n){
            if(arr[i]>arr[i+1]){
            flag=1;
            break;
        }
        }
    }
    if (flag==1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
}