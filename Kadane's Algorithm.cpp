//TimeComplexity:O(n)
//SpaceComplexity:O(1)
int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int i,ans =arr[0];
        int sum =arr[0];
        for(i=1;i<n;i++){
            sum=max(arr[i],sum+arr[i]);
            ans=max(ans,sum);
        }
        return ans;
        
    }
