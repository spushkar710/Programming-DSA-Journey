//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++

// ############################################## THE REQUIRED FUNCTION ############################################################
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    
        /*
        In Brute Force Approach:
        1. Sort the Array  -> O(n logn)
        2. Largest Element would be at the end.
        3. Start the loop from n-2 and the first element which is !largest, will be second largest. -> O(n)

        Time Complexity : O(n logn) + O(n)
        */

	    int slargest = -1;
	    int largest = arr[0];
	    
	    for(int i=1;i<n;i++){
	        //if an element becomes largest, then the previous largest will become second largest.
	        if(arr[i]> largest){    
	            slargest = largest;
	            largest = arr[i];
	        }
	        
	        //if a number is smaller then largest, but greater than second largest, then it will be second largest.
	        else if(arr[i]<largest && arr[i]>slargest){
	            slargest = arr[i];
	        }
	    }
	    
	    return slargest;
	    
	    // Time Complexity: O(N)
        // Auxiliary Space: O(1)
	}
};
// ##################################################################################################################################

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends