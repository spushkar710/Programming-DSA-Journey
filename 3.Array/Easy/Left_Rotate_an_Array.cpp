/**
Example:

Input: N = 7, K = 2
arr[] = {1, 2, 3, 4, 5, 6, 7}
Output: 3 4 5 6 7 1 2

Explanation: Rotation of the above 
array by 2 will make the output array .

*/


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	/**
    
    if (n == 0) return;

    //! Get the effective number of rotations:
    k = k % n;

    //!checking if k is a multiple of n:
    if (k == 0) return;

    int temp[k]; // temporary array

    //!step 1: Copying first k elements
    //! in the temporary array:
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    //! step 2: Shift last (n-k) elements
    //! to the left by k places in the given array:
    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    //! step 3: Place the elements of the temporary
    //! array in the last k places of the given array:
    for (int i = n - k; i < n; i++) {
        arr[i] = temp[i - (n - k)];
    
    }
    */
       
    //OPTIMISED APPROACH:
	  
       k=k%n;
	   
	   reverse(arr, arr+k);    //reversing the array from 0 to k-1
	   reverse(arr+k, arr+n);  //reversing the array from k to n-1
	   reverse(arr, arr+n);    //reversing the array from 0 to n-1
	} 
		 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends