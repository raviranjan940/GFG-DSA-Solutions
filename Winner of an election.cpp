//Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        map<string,int> mp;
        vector<string> v1;
        int res = 1;
        for(auto i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto x:mp){
            res = max(res,x.second);
           
        }
        for(auto x:mp){
            if(x.second==res){
                v1.push_back(x.first);
                v1.push_back(to_string(res));
            }
        }
        return v1;
    }
