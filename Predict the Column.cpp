
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        int maxind=-1;
        int ans=0;
        for(int i=0;i<N;i++)
        {
            int cnt=0;
            for(int j=0;j<N;j++)
            {
              if(arr[j][i]==0) cnt++;
            }
            if(ans<cnt)
            {
              ans=cnt;
              maxind=i;
            }
        }
        return maxind;
        
        
    }
};
