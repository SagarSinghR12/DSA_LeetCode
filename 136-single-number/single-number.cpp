class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i : nums)
            freq[i]++;
        
        // unordered_map<int,int> :: iterator it;
        // for(it = freq.begin(); it!=freq.end(); it++){
        //     int key = it->first;
        //     int value = it->second;
        //     if(value == 1){
        //         return key;
        //     }
        // }

        for(auto &i : freq){
            if(i.second == 1)
                return i.first;
        }

        return -1;
    }
};