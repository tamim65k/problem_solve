class Solution {
public:
    vector<int> productExceptSelf(vector<int> & nums){
        int n = nums.size();
        
        int countZeros(0), indexZero(-1), productWithoutZero(1);

        for(int i=0;i<n; i++){
            if(nums[i]==0){
                countZeros++;
                indexZero=i;
            } else {
                productWithoutZero *= nums[i];
            }
        }

        vector<int> ans(n,0);

        if(countZeros==0){
            for(int i=0;i<n;i++){
                ans[i] = productWithoutZero/nums[i];
            }
        } 
        else if(countZeros==1){
            ans[indexZero] = productWithoutZero;
        }

        return ans;
    }
};