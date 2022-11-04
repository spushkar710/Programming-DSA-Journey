/*

1 
0 1 
1 0 1
0 1 0 1 
1 0 1 0 1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n)      //Function to print the pattern.
    {
       
        for(int row =1; row<=n;row++)
        {
            if(row%2==0)             //whether number will start with 0 or 1.(will vary acc. to row)
            {
                for(int col=1;col<=row;col++)
                {
                    if(col%2!=0)      //for alternate printing of 0 and 1.
                    {
                        cout<<"0 ";
                    }
                    else
                    {
                        cout<<"1 ";
                    }
                }
            }
            else
            {
                for(int col=1;col<=row;col++)
                {
                    if(col%2!=0)
                    {
                        cout<<"1 ";
                    }
                    else
                    {
                        cout<<"0 ";
                    }
                }
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