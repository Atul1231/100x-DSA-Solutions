#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while (t--){
        int n;
        cin >> n;
        
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++){
            
            bool alreadyChecked = false;
            for(int k = 0; k < i; k++){
                if(arr[k] == arr[i]){
                    alreadyChecked = true;
                    break;
                }
            }
            
            if(alreadyChecked) continue;

            // Step 2: check for duplicate ahead
            bool found = false;
            for (int j = i + 1; j < n; j++){
                if (arr[i] == arr[j]){
                    found = true;
                    break;
                }
            }

            // Step 3: print once
            if(found){
                cout << arr[i] << "\n";
            }
        }
    }
}