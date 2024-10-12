//  Merge Sort
void merge(vector<int> &arr, int low,int  mid,  int high){
        vector<int> v;
        int i=low;
        int j=mid+1;
        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]){
                v.push_back(arr[i]);
                i++;
            }
            else {
                v.push_back(arr[j]);
                j++;
            }

        }
        while(i<=mid){
            v.push_back(arr[i]);
                i++;
        }
        while(j<=high){
             v.push_back(arr[j]);
                j++;
        }
        for(int i=low;i<=high;i++){
            arr[i]=v[i-low];
        }
    }
    void mergeSort(vector<int> &arr, int low, int high){
    if(low<high){
        int mid=low+(high-low)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1,high);
        merge(arr,low,mid,high);
    }
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
