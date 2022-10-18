/*


    *
   ***  
  *****
 *******
*********

*/


//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n)                 //The Function to print the pattern
    {
        int space;
        for(int row=1,col=0;row<=n;row++,col=0)
        {
            for(space = 1;space<=n-row;space++)
            {
                cout<<" ";
            }
            
            while(col!=2*row-1)
            {
                cout<<"*";
                col++;
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