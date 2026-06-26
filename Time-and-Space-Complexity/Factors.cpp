#include<bits/stdc++.h>

using namespace std;

int main(){
    long long a , count_Fact=0;
    cin>>a;

    for (int i = 1; i <= sqrt(a); i++)
    {
        if (a%i == 0)
        {
            int j=a/i;
            if(i==j){
            count_Fact++;
            }else
            {
                count_Fact+=2;
            }
        }
    }
    cout<<count_Fact;
}