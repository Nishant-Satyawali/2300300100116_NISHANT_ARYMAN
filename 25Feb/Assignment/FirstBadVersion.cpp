// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int a = 0;
        int b = n;
        while(a<=b){
            int m = a+(b-a)/2;
            if(isBadVersion(m) && !isBadVersion(m-1)) return m;
            if(isBadVersion(m-1)) b= m-1;
            else if(!isBadVersion(m)) a = m+1;
        }
        return a;
    }
};