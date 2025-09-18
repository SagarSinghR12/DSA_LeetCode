class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int less=0, equal=0;
        for(int i : nums){
            if(i < target)
                less++;
            else if(i == target)
                equal++;
        }

        vector<int> result;
        for(int i=0; i<equal; i++){
            result.push_back(less+i);
        }
        return result;
    }
};