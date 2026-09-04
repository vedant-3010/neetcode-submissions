class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        int n = nums.size();

        for(int i =0; i<n; i++){
            s.insert(nums[i]);
        }

        if(s.size() != nums.size()){
            return true;
        }
        else{
            return false;
        }
    }
};