//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    public:
int mod = 1e9+7;
    int help(string s,string t,int i,int j,vector<vector<int>> &dp){
        if(j==t.length())return 1;
        if(i==s.length())return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int a = 0,b = 0;
        if(s[i]==t[j]){
            a=help(s,t,i+1,j+1,dp);
        }
        b=help(s,t,i+1,j,dp);
        return dp[i][j] = (a+b)%mod;
    }
    int subsequenceCount(string s, string t)
    {
      //Your code here
      int n = s.length(), m=t.length();
      vector<vector<int>> dp(n,vector<int>(m,-1));
      return help(s,t,0,0,dp);}
};
 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends
