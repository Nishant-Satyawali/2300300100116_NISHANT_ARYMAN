// https://leetcode.com/problems/container-with-most-water/
class Solution {
public:
    int solve(vector<int>& height){
        int ans  =  INT_MIN;
        for(int i = 0 ; i<height.size();i++){
            for(int j = i+1 ; j< height.size();j++){
                int temp = min(height[j],height[i]) * (j-i) ;
                if ( temp >= ans){
                    ans = temp;
                }
            }
        }
        return ans;

    }
    int maxArea(vector<int>& height) {
        // return solve(height);
        int s  = 0 ;
        int e = height.size()-1;
        int ans = 0;
        while(s<=e){
            int x = min(height[s],height[e]) * (e-s);
            if(x>ans) ans=x;
            else if(height[s]<=height[e]) s++;
            else e--;
        }
        return ans;
    }
};