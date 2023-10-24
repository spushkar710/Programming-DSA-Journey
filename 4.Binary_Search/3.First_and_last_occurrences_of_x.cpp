/**
 * Given a sorted array arr containing n elements with possibly some duplicate, 
 * the task is to find the first and last occurrences of an element x in the given array.
 * Note: If the number x is not found in the array then return both the indices as -1. 
*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//################################################# THE REQUIRED FUNCTION ##############################################################
class Solution
{
    public:


    vector<int> find(int arr[], int n , int x )
    {
    
    vector<int> v;

    int low=0;
    int high=n-1;
    int res=-1;
    while(low<= high)
    {
        int mid= low+ (high-low)/2;  // Finding mid
        if(x==arr[mid])
        {
            res=mid;
            high= mid-1;
        }
        else if(x<arr[mid])
        {
            high=mid-1;
        }
        else
        {
            low= mid+1;
        }
    }
    v.push_back(res); //Puting the first occurence in the vector
    

    // Finding the last Occurence
    low= 0;
    high= n-1;
    while(low<= high)
    {
        int mid= low+ (high-low)/2;
        if(x==arr[mid])
        {
            res=mid;
            low= mid+1;
        }
        else if(x<arr[mid])
        {
            high=mid-1;
        }
        else
        {
            low= mid+1;
        }
    }
    v.push_back(res);
    return v;

    }
};

//####################################################################################################################################

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends