/*

1
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5


*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n)               //The Function to print the pattern
    { 

        for (int row=1;row<n+1;row++)
        {
            for(int col=1;col<=row;col++)
            {
                cout<<col<<" ";
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends