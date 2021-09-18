//TimeComplexity:O(n)
//SpaceComplexity:O(1)
int minJumps(int arr[], int n){
        // Your code here
        if(arr[0]==0)
        return -1;
        if(n==1)
        return 0;
        int i,maxreach=arr[0],steps=arr[0],jumps=1;
        for(i=1;i<n;i++){
            if(i==n-1)
            return jumps;
            maxreach=max(maxreach,i+arr[i]);
            steps--;
            if(steps==0)
            {
                jumps++;
                if(i>=maxreach)
                return -1;
                steps=maxreach-i;
            }
        }
