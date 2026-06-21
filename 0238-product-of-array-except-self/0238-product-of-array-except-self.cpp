class Solution{
public:
    vector<int> productExceptSelf(vector<int>& nums){
        int n = nums.size();
        vector<int> ans(n);
        vector<int> left_p(n);
        vector<int> right_p(n);
        left_p[0] = 1;
        for(int i=1;i<n;i++){
            left_p[i] = left_p[i-1] * nums[i-1];
        }

        right_p[n-1] = 1;
        for(int i=n-2;i>=0;i--){
            right_p[i] = right_p[i+1] * nums[i+1];
        }

        for(int i=0;i<n;i++){
            ans[i] = left_p[i] * right_p[i];
        }

        return ans;
    }
};