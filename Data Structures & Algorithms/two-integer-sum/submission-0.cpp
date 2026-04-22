class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        set<int> result;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    result.insert(i);
                    result.insert(j);
                }
            }
        }
        vector<int>dup(result.begin(),result.end());
        return dup;
    }
};
