/*

*********
 *******
  *****
   ***
    *
    
*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n)             //The Function to print the pattern
    {
	    
	    int space;
	    
	    for(int row=n;row>=1;row--)
	    {
	        for(space=0;space<n-row;space++)
	        {
	            cout<<" ";
	        }
	        
	        for(int col = 1; col <= 2*row-1; ++col)
            cout << "*";
	        
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