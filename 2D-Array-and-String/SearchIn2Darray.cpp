#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,target;
    int flag=0;
    cin>>n>>m>>target;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j]==target){
                flag=1;
            }
        }
    }
    if (flag==0){
        cout<<"false";
    }
    else
    {
        cout<<"true";
    }
}