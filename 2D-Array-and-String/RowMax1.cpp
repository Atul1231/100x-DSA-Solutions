#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int row_max_1=-1;
    int max_count=0;
    for (int i = 0; i < n; i++)
    {
        int count_1=0;
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j]==1){
                count_1++;
            }
        }
        if(count_1>max_count){
            max_count=count_1;
            row_max_1=i;
        }
    }
    cout<<row_max_1;
}