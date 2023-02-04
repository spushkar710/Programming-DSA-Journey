//{ Driver Code Starts
//Initial Template for C++

// C++ program for implementation of Bubble sort
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

/*################################################### THE REQUIRED FUNCTION ######################################################*/
class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // Your code here
        for(int i=n-1;i>=1;i--){
            int isswaped = 0;
            for(int j=0;j<=i-1;j++){
                
                if(arr[j]>arr[j+1])
                {
                   int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    isswaped+=1;
                }
            }
            
            if(isswaped==0){   //<- if the array is already sorted.
                break;
            }
        }
    }
};

/*###################################################################################################################################*/

//{ Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
      
    ob.bubbleSort(arr, n);
    printArray(arr, n);
    }
    return 0;;
}
// } Driver Code Ends