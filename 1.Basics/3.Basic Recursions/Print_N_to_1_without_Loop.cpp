//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*############################### THE REQUIRED FUNCTION #######################################*/

class Solution{
    public:
    void printNos(int N)
    {
        if(N>0)
        {
            cout<<N<<" ";    // <-- This line will be "first executed", then function will call itself. 
            printNos(N-1);
        }
    }
};

/*##############################################################################################*/

//{ Driver Code Starts.
/* Driver program to test printNos */
int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    
    while(T--)
    {
        int N;
        
        //input N
        cin>>N;
        Solution ob;
        //calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends