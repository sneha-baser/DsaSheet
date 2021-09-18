//TimeComplexity:O(n)
//SpaceComplexity:O(1)
void rotate(int arr[], int n)
{
    int i;
    int temp=arr[n-1];
    for(i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
}
