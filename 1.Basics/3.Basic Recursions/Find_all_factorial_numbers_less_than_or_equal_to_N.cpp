//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

/*##################################### THE REQUIRED FUNCTION ########################################*/
class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {
        long long fact = 1,i =2;

        vector<long long> v;

        while(fact <= N){

            v.push_back(fact);
            fact = fact * i++;

        }

        return v;
    }
};
/* #####################################################################################################*/

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends