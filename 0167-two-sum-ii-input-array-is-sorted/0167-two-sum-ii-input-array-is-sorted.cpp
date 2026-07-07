class Solution{
public:
  vector<int> twoSum(vector<int>& num, int t){
    int start(0), end(num.size()-1);

    while(start<end){
      int sum = num[start]+num[end];

      if(sum==t) return {start+1,end+1};
      else if(sum<t) start++;
      else end--;
    }

    return {-1,-1};
  }
};