/*

* 
* * 
* * * 
* * * * 
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

class Solution{
public:
    void printTriangle(int n)    //Function to print the pattern.
    {
        //First half of the pattern.
          for(int upper_rows=1; upper_rows<=n; upper_rows++)

        {

            for(int upper_columns=1; upper_columns<=upper_rows ; upper_columns++)

            {

                cout<<"* ";

            }

            cout<<endl;

        }

        //Second half of the pattern.
        for(int bottom_rows=n-1; bottom_rows>=1; bottom_rows--)

        {

            for(int bottom_columns=1; bottom_columns<=bottom_rows ; bottom_columns++)

            {

                cout<<"* ";

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