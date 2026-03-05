class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int count = 1;
        int i = 0;
        while(k){
            if(i<n && count == arr[i]){
                i++;
            }else{
                k--;
            }
            count++;
        }
        return count-1;
    }
};