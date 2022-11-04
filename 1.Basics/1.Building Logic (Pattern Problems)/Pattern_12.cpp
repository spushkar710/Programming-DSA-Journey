/*

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15

*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n)   //Funtion to print the pattern.
    {
        
        int k=1;              //k refers to actual values being printed in the pattern.
        for(int row=1;row<=n;row++)
        {
            for(int column=1;column<=row;column++)
            {
                cout<<k<<" ";
                k++;
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