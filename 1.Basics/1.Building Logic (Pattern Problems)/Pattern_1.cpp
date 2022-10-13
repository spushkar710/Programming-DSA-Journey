/* 

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

//Main Function
class Solution {
  public:
    void printSquare(int n) {
        for(int row=0;row<n;row++)
        {
            for(int col=0;col<n;col++)
            {
                cout<<"*"<<" ";
                
            }
            cout<<endl;
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends