/**
 * Given a sorted array arr[] of size N without duplicates, and given a value x. 
 * Floor of x is defined as the largest element K in arr[] such that K is smaller than or equal to x. 
 * Find the index of K(0-based indexing).
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//################################################### THE REQUIRED FUNCTION ############################################################
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        
        int low=0,high=n-1;
        int ans=-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(v[mid]<=x){
                ans=mid;
                low=mid+1;
            }
            
            else{
                high=mid-1;
            }
        }
        
        return ans;
        
        
    }
};
//###########################################################################################################################################

//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends