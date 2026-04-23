class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> value;
        int i,j =0;
        sort(numbers.begin(),numbers.end());
        for(int i=0;i<numbers.size();i++){
            for(int j=i+1;j<numbers.size();j++){
                if(numbers[i]!=numbers[j] && numbers[i]+numbers[j]==target)
                {
                    value.push_back(i+1);
                    value.push_back(j+1);
                }
            }
        }

        return value;
    }
};
