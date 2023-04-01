//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

// ################################################# THE REQUIRED FUNCTION #######################################################
class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        
        int count = 0;
        for(int i=0;i<n-1;i++){
            if(arr[i]<=arr[i+1]){
                continue;        //if this is true, move to next iteration
            }
            else {
            ++count;            //else increase count
            }                    
        }
        
        if(count==0){
            return 1;
        }
        else
          return 0;
        
    }
};

//###################################################################################################################################
//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends