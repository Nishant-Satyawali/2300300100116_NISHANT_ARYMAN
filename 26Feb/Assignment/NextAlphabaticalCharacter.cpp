class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int s = 0;
        int e = n-1;
        if(letters[e] <= target) return letters[0];
        char ans ;
        while(s<=e){
            int m = s+(e-s)/2;
            if(target< letters[m]) {
                ans= letters[m];
                e=m-1;
                }
           else if(target>=letters[m]) s = m+1;
        }
        return ans;
    } 
};