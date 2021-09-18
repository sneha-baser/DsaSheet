//TimeComplexity: O(nlog(k+1))=>O(nlog(k))
//spaceComplexity:O(k+1)

int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int>maxheap;
        int i;
        for(i=0;i<=r;i++){
            maxheap.push(arr[i]);
            if(maxheap.size()>k)
            maxheap.pop();
            
        }
        return maxheap.top();
    
    }
