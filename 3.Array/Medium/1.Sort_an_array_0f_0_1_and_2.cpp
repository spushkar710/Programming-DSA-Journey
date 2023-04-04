//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

//################################################# THE REQUIRED FUNTION ##################################################################
class Solution
{
    public:
    void sort012(int arr[], int n)
    {

    /** BRUTE FORCE APPROCH :
     *  Brute Force Approch would be to the array using sort() function.
     *  
     *  Time Complexity: O(N*logN)
     *  Space Complexity: O(1)
    */



    

    /** BETTER APPROACH : 

    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) cnt0++;
        else if (arr[i] == 1) cnt1++;
        else cnt2++;
    }

    /Replace the places in the original array:
    for (int i = 0; i < cnt0; i++) arr[i] = 0; //! replacing 0's

    for (int i = cnt0; i < cnt0 + cnt1; i++) arr[i] = 1; //! replacing 1's

    for (int i = cnt0 + cnt1; i < n; i++) arr[i] = 2; //! replacing 2's
    }

     * Time Complexity: O(N) + O(N), where N = size of the array. First O(N) for counting the number of 0’s, 1’s, 2’s, 
       and second O(N) for placing them correctly in the original array.
     
     * Space Complexity: O(1) as we are not using any extra space.
    */




    //! OPTIMAL APPROACH (Dutch National Flag Algorithm):
    
    int low = 0, mid = 0, high = n - 1; // 3 pointers

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    /**
    There can be three different values of mid pointer i.e. arr[mid]
    // If arr[mid] == 0, we will swap arr[low] and arr[mid] and will increment both low and mid. 
       Now the subarray from index 0 to (low-1) only contains 0.
    // If arr[mid] == 1, we will just increment the mid pointer and then the index (mid-1) will point to 1 as it should according to the rules.
    // If arr[mid] == 2, we will swap arr[mid] and arr[high] and will decrement high. 
       Now the subarray from index high+1 to (n-1) only contains 2.
       In this step, we will do nothing to the mid-pointer as even after swapping, the subarray from mid to high(after decrementing high)
        might be unsorted. So, we will check the value of mid again in the next iteration.

    * Time Complexity: O(N), where N = size of the given array.
      Reason: We are using a single loop that can run at most N times.

    * Space Complexity: O(1) as we are not using any extra space.    
    */
  }  
};

//#########################################################################################################################################

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends