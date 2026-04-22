class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>res;
        for(auto s:strs){
            string sorted_val=s;
            sort(sorted_val.begin(),sorted_val.end());
            res[sorted_val].push_back(s);
        }

        vector<vector<string>>result;
        for(auto p:res){
            result.push_back(p.second);
        }
        return result;
    }
};