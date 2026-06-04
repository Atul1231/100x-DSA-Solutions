#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int num;
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        int n;
        cin>>n;
        int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < n-1; i++){
            for(int j = 0; j < n-i-1; j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j], arr[j+1]);
                }
            }
        }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
}
}