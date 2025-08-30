class Solution {
public:
    vector<int> bs_method(vector<int>& arr, int k, int x){
        int start = 0;
        int end = arr.size()-k;
        while(start < end){
            int mid = start + (end-start)/2;
            if(x-arr[mid] > arr[mid+k]-x)
                start = mid+1;
            else
                end = mid;
        }

        vector<int> ans;
        for(int i=start; i<start+k; i++)
            ans.push_back(arr[i]);
        
        return ans;
    }

    vector<int> twoPtrMethod(vector<int>& arr, int k, int x){
        int start = 0;
        int end = arr.size()-1;
        while(end-start >= k){
            if(x-arr[start] > arr[end]-x)
                start++;
            else
                end--;
        }
        vector<int> ans;
        for(int i=start; i<=end; i++)
            ans.push_back(arr[i]);
        
        return ans;
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // return twoPtrMethod(arr, k, x);    
        return bs_method(arr, k, x);    
    }
};