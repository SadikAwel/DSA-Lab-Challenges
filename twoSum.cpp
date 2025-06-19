class Solution {
    vector<int> full; 
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            
            for(int j = 0; j < nums.size(); j++) {
             if(( nums[i] + nums[j] == target && j > i)){
                    cout << "[" << i << ", " << j << "]";
                    full = {i, j};
                    break;
                }
            
            }
        }
        return full;
    }
};