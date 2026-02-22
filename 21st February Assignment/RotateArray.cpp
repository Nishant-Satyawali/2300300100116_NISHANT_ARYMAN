// https://leetcode.com/problems/rotate-array/
class Solution {
public:
     void attempt(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        while(k!=0){
            int x = nums[n-1];
            nums.insert(nums.begin(),x);
            nums.pop_back();
            k--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k%=n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};