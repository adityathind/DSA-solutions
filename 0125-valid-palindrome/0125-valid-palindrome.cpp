class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() -1 ;
        while (right > left) {
            if ( isalnum (s[left]) && isalnum(s[right])) {
                if (tolower(s[left]) == tolower(s[right])) {
                    left ++;
                    right--;
                } else {
                    return false;
                }
            } else  {
                if(!isalnum(s[left])) {
                    left++;
                } else if (!isalnum(s[right])) {
                    right--;
                }
            }
        }
        return true;
    }
};