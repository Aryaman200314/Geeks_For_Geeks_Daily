//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int sameChar(string A, string B)
    {
        // code here 
        // int s = 0;
       transform(A.begin(), A.end(), A.begin(), ::tolower);
       transform(B.begin(), B.end(), B.begin(), ::tolower);
         int count = 0;
        if(A.size() != B.size())
        {
            return -1;
        }
        else 
        {
            for(int i = 0 ; i < A.size() ; i ++)
            {
               if(A[i]==B[i])
               {
                   count++;
               }
            }
        }
        return count;
        
       
       
        // return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.sameChar(A,B)<<endl;
    }
    return 0;
}
// } Driver Code Ends