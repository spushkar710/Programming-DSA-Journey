/*

* 
* * 
* * * 
* * * * 
* * * * *

*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n)        //The Function to print the pattern
    {

        for(int row=0;row<n;row++)
        {
            for(int col=0;col<=row;col++)
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends