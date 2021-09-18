//timeComplexity: O(n)
//SpaceComplexity: O(1)

void sort012(int arr[], int n)
{
    
    // coode here 
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        switch(arr[mid]){
            case 0:
            swap(arr[low],arr[mid]);
            low++;
            mid++;
            break;
            case 1:
            mid++;
            break;
            case 2:
            swap(arr[mid],arr[high]);
            high--;
            break;
        }
    }
}
