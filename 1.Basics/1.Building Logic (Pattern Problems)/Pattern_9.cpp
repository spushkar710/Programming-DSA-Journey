/* 

    *
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *

*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution {
  public:
    void printDiamond(int n)            //Function that prints the pattern.
     {
        int space;
        for(int i=1,k=0;i<=n;i++,k=0)
        {
            for(space = 1;space<=n-i;space++)
            {
                cout<<" ";
            }
            
            while(k!=i)
            {
                cout<<"* ";
                k++;
            }
            cout<<endl;
        }
        for(int i=n;i>=1;i--)
	    {
	        for(space=0;space<n-i;space++)
	        {
	            cout<<" ";
	        }
	        
	        for(int j = 1; j <= i; ++j)
            cout << "* ";
	        
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
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends