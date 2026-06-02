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
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==num){
            count++;
        }
    }
    cout<<count;
}