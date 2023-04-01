//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

//############################################ THE REQUIRED FUNCTION ################################################################
class Solution{
public:
	void pushZerosToEnd(int a[], int n) {
	
	/** BRUTE FORCE APPROACH :
       
       vector<int> temp;

        //!Step 1 - Storing non-zero elements in temp.
        for(int i=0;i<n;i++){
            if(a[i]!=0){
                temp.push_back(a[i]);
            }
        }

        //!Step 2:Shifting non-zero elements from temp to a.
        int tsize  = temp.size();
        for(int i=0;i<tsize;i++){
            a[i] = temp[i];
        }

        //!Step 3: Filling remaining array with zeroes.
        for(int i=tsize;i<n;i++){
            a[i] = 0;
        }
    */
    
    //OPTIMISED APPROACH (Two Pointer):    
	   
    int j=0;
	   
       for(int i=0; i<n; i++){
	       if(a[i]!=0){
	           a[j]=a[i];
	           j++;
	       }
	   }
	   
	   for(int i=j; i<n; i++){
	       a[i]=0;
	   }
	}
};

//###################################################################################################################################
//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends