class Solution {
public:
    void merge_stdAprch(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int i = 0;
        int j= 0;

        while(i<m && j<n){
            if(nums1[i] < nums2[j])
                ans.push_back(nums1[i++]);
            else
                ans.push_back(nums2[j++]);
        }

        while(i < m)
            ans.push_back(nums1[i++]);

        while(j < n)
            ans.push_back(nums2[j++]);

        for(int k=0; k<ans.size(); k++)
            nums1[k] = ans[k];
    }

    void merge_inPlace(vector<int>& nums1, int m, vector<int>& nums2, int n){
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i] > nums2[j])
                nums1[k--] = nums1[i--];
            else
                nums1[k--] = nums2[j--];
        }
        while(j>=0)
            nums1[k--] = nums2[j--];
    }

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // merge_stdAprch(nums1, m, nums2, n);
        merge_inPlace(nums1, m, nums2, n);
    }
};