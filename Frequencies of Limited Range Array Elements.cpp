//Function to count the frequency of all elements from 1 to N in the array.
void frequencyCount(vector<int>& arr,int N, int P)
    { 
        unordered_map<int, int> map;
        for(int i=0; i<N; i++) map[arr[i]]++;
        for(int i=1; i<=N; i++) arr[i-1] = map[i];
    }

Input:
N = 5
arr[] = {2, 3, 2, 3, 5}
P = 5
Output:
0 2 2 0 1
Explanation: 
Counting frequencies of each array element
We have:
1 occurring 0 times.
2 occurring 2 times.
3 occurring 2 times.
4 occurring 0 times.
5 occurring 1 time.
