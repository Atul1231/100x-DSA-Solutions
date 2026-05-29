#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,pos=0,neg=0,even=0,odd=0,zero=0;
    cin>>n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
        if(arr[i]==0){
            zero++;
            even++;
        }
        else if(arr[i]>0 && arr[i]%2==0){
            pos++;
            even++;
        }
        else if(arr[i]>0 && arr[i]%2!=0){
            pos++;
            odd++;
        }
        else if (arr[i]<0 && arr[i]%2==0)
        {
            neg++;
            even++;
        }
        else{
            neg++;
            odd++;
        }
    }
    cout<<pos<<"\n";
    cout<<neg<<"\n";
    cout<<even<<"\n";
    cout<<odd;
}