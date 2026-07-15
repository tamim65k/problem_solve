class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;

        if(nums.size()<3) return res;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-2;i++){
            if(i>0 nums[i]==nums[i-1]) continue;
            if(nums[i]>0) break;
            int target = -nums[i], l=i+1, r=nums.size()-1;

            while(l<r){
                int sum = nums[l]+nums[r];
                if(sum==target){
                    res.push_back({nums[i],nums[l],nums[r]});
                    r--;l++;
                    while(l<r and nums[l]==nums[l-1]) l++;
                    while(l<r and nums[r]==nums[r+1]) r--;
                }
                else if(sum<target) l++;
                else r--;
            }
        }

        return res;
    }
};
