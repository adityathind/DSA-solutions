class Solution {
public:
    bool isSubsequence(string s, string t) {

        int bigCount = 0;
        int smallCount = 0;

        for ( int i = 0 ; i < t.size() && smallCount <s.size() ; i++) {
            if (t[bigCount] == s[smallCount]){
                bigCount++; 
                smallCount++;
            } else {
                bigCount++;
            }
        }
        return smallCount == s.size();
    }
};