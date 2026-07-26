class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st=0, end=arr.size()-1;
        while(true){
            int mid=st+(end-st)/2;
            if(arr[mid]>arr[mid-1]&& arr[mid]>arr[mid+1]){
                return mid;
                break;
            }
            if(arr[mid-1]<arr[mid]){
                st=mid;
            }
            else if(arr[mid-1]>arr[mid]){
                end=mid;
            }
        }
        
    }
};