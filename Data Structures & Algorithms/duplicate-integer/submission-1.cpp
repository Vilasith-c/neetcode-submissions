class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> unique_num;

        for(auto i:nums){
            unique_num.insert(i);
        }

        if(unique_num.size()!=nums.size()){return true;}
        else{return false;}
    }
};