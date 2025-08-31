class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> table;
        for(int i : nums)
            table[i]++;

        for(auto it : table){
            if(it.second > nums.size()/2)
                return it.first;
        }
        return -1;
    }
};