//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

/* ########################################### THE REQUIRED FUNCTION ###########################################################*/
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    //loop will run from 0 to half the size of string, because all the characters would have been checked by then.
	    for(int i = 0;i<= S.length()/2;i++){
	        
	        if(S[i]!=S[S.length()-i-1]){  //We will check whether starting elements(moving forward) are same as ending elements(moving backwards).
	            return 0;
	        }
	    }
	    return 1;
	}

};
/*#################################################################################################################################*/

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends