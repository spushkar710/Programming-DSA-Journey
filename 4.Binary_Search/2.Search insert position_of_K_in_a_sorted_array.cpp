/**
 * Given a sorted array Arr[](0-index based) consisting of N distinct integers and an integer k, 
 * the task is to find the index of k, if its present in the array Arr[].
 * Otherwise, find the index where k must be inserted to keep the array sorted.
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

//####################################################### THE REQUIRED FUNCTION #########################################################
class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
      
	int low=0,high=N-1;
	int ans=N;

	while(low<=high){
		int mid=low+(high-low)/2;

		if(Arr[mid]>=k){
			ans=mid;
			high=mid-1;
		}

		else{
			low=mid+1;
		}
	}

	return ans;
    }
};
//#######################################################################################################################################

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends