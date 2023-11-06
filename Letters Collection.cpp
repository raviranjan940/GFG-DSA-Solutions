class Solution{
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
       vector<int> ans;
       for(int count =0; count < q; count ++){
           int h = queries[count][0];
           int i = queries[count][1];
           int j = queries[count][2];
           if(i>=n || j>=m){
               ans.push_back(-1);
           }
           int sum = 0;
           for(int k = -h; k<= h; k++){
               if(i-h > -1 && j+k>-1 && j+k < m)
                   sum += mat[i-h][j+k];
                   
               if(i+h < n && j+k> -1 && j+k < m)
                   sum += mat[i+h][j+k];
                   
               if(k>-h && k<h){
                   if(j-h > -1 && i+k >-1 && i+k<n)
                       sum += mat[i+k][j-h];
                   if(j+h < m && i+k >-1 && i+k<n)
                       sum += mat[i+k][j+h];
               }
           }
           ans.push_back(sum);
       }
       return ans;
    }
};
