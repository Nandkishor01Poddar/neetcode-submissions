class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            int need = target - nums[i];

            // smaller index first since mp[need] is earlier
            if (mp.count(need)) {
                return {mp[need], i}; // smaller index first since mp[need] is earlier
            }
            mp[nums[i]] = i;
        }
        return {-1, -1}; // should never happen because answer is guaranteed
    }
};
