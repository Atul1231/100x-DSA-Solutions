#include<bits/stdc++.h>
using namespace std;
bool iseven(int i){
    if (i%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        for (int i = 1; i <= n; i+=2)
        {
            cout<<i<<"\t";
        }
        if (iseven(n))
        {
            for (int i = n; i >= 2; i-=2)
            {
                cout<<i<<"\t";
            }  
        }
        else
        {
            for (int i = n-1; i >= 2; i-=2)
            {
                cout<<i<<"\t";
            }
            
        } 
        cout<<"\n";
    }
    
} 