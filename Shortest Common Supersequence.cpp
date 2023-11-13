//Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string s1, string s2, int m, int n)
    {
        vector<int> pre(n+1,0);
        for(int i=1;i<=m;i++)
        {
            vector<int> curr(n+1,0);
            for(int j=1;j<=n;j++)
            {
                
                if(s1[i-1]==s2[j-1])
                {
                    curr[j]=1+pre[j-1];
                    continue;
                }
                
                int a=pre[j];
                int b=curr[j-1];
                
                curr[j]=max(a,b);
            }
            pre=curr;
        }
        
        return m+n-pre[n];
    }
