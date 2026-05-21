class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // for (int i=0;i<nums.size();i++){          // brute force 
        //     for (int j=i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j])
        //         return true;
        //     }
        // }
        // return false;

        // sort(nums.begin(), nums.end());             // sorting and adjacent compare
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]==nums[i-1])
        //     return true;
        // }
        // return false;

        unordered_set<int> exist;
        for (int i : nums){
            if(exist.count(i)){
                return true;
            }
            exist.insert(i);
        }
        return false;
    }
};