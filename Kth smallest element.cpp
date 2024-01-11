
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
       priority_queue<int>pq;
        //putting k element in the priority queue
        for(int i=l;i<k;i++){
            pq.push(arr[i]);
        }
        // comparing the top element of priority queue with arr[i], if smaller replace with top element 
        for(int i=k;i<=r;i++){
            if(arr[i]<pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        // last return the top element;
        return pq.top();
    }
};
