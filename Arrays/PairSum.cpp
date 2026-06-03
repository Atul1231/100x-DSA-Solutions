#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int arr1[n];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    int x;
    cin>>x;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
                if(arr1[i]+arr1[j]==x){
                    count++;
                }
            
        }
    }
    cout<<count<<endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}