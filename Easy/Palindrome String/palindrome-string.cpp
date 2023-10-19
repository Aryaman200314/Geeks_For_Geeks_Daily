//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int f;
	    int e;
	    f  = 0;
	    e = S.size()-1;
	    while(e > f){
	    
	        if(S[e]==S[f])
	        {
	            e--;
	            f++;
	        }
	        else 
	        {
	            return 0;
	        }
	    }
	    return 1;
	    }
	}

;

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends