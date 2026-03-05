// https://leetcode.com/problems/koko-eating-bananas/?envType=problem-list-v2&envId=w77n2akj

class Solution {
public:
   long long hour(int k, vector<int>& piles){
        long long sum = 0;   
    for(int i = 0; i < piles.size(); i++){
        sum += ceil((double)piles[i] / k);
    }

    return sum;
}

    int minEatingSpeed(vector<int>& piles, int h) {
        int i =1;
        int j  = *max_element(piles.begin(), piles.end());
        int ans;

        while(i<=j){
            int m = i + (j-i)/2;
            long long TH = hour(m,piles);
            if(TH <= h){
                j = m-1;
                ans = m;
            }
            else i = m+1;
           
        }
        return ans;
    }
};