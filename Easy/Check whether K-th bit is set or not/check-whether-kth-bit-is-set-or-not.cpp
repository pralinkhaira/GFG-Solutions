//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    bool checkKthBit(int n, int k)
    {
        // Your code here
        vector<int>arr;
       while(n>0){
           int digit = n%2;
           arr.push_back(digit);
           n /=2;
       }
       int m = arr.size()-1;
       if(arr[k]==1 && m>=k){
           return true;
       }
       return false;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;//taking testcases
	while(t--)
	{
	    long long n;
	    cin>>n;//input n
	    int k;
	    cin>>k;//bit number k
	    Solution obj;
	    if(obj.checkKthBit(n, k))
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}
// } Driver Code Ends