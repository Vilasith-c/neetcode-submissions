

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,1);

        int left_itr=1;
        for(int i=0;i<n;i++){
            res[i]=left_itr;
            left_itr=left_itr*nums[i];
        }

        int right_itr=1;
        for(int i=n-1;i>=0;i--){
            res[i]*=right_itr;
            right_itr=right_itr*nums[i];
        }
        return res;
    }
};
