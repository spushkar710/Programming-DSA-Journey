/** EXAMPLE :
Input:
N = 5 
A[] = {3,1,3,3,2} 

Output:
3

Explanation:
Since, 3 is present more
than N/2 times, so it is 
the majority element.
*/

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

//################################################ THE REQUIRED SOLUTION #################################################################
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {

    /* 
    
    BRUTE FORCE :

        for(int i=0;i<size;i++){
            int cnt=0;
            for(int j=0;j<size;j++){
                if(a[i]==a[j]){
                    cnt++;
                }
            }

            if(cnt>(size/2)){
                return a[i];
            }
        }

        return -1;




    BETTER SOLUTION :

        map<int, int> mpp;

        for(int i=0;i<size;i++){
            mpp[a[i]]++;
        }

        for(auto it: mpp){
            if(it.second > size/2){
                return it.first;
            }
        }

        return -1;


    Time Complexity: O(N*logN) + O(N), where N = size of the given array.
    Reason: We are using a map data structure. Insertion in the map takes logN time. And we are doing it for N elements. 
    So, it results in the first term O(N*logN). The second O(N) is for checking which element occurs more than floor(N/2) times.
    If we use unordered_map instead, the first term will be O(N) for the best and average case and for the worst case, it will be O(N2).

    Space Complexity: O(N) as we are using a map data structure.    
    */ 
    
    
    
    
    //OPTIMAL SOLUTION :

    int cnt = 0; // count
    int el; // Element

    //applying the Moore Voting Algorithm:
    for (int i = 0; i < size; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = a[i];
        }
        else if (el == a[i]) cnt++;
        else cnt--;
    }
    
    int cnt1 = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] == el) cnt1++;
    }

    if (cnt1 > (size / 2)) return el;
    return -1;

    /*
    Time Complexity: O(N) + O(N), where N = size of the given array.
    Reason: The first O(N) is to calculate the count and find the expected majority element. 
    The second one is to check if the expected element is the majority one or not.

    Note: If the question states that the array must contain a majority element, in that case, we do not need the second check. 
    Then the time complexity will boil down to O(N).

    Space Complexity: O(1) as we are not using any extra space.  
    */
        
    }
};
//#########################################################################################################################################

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends