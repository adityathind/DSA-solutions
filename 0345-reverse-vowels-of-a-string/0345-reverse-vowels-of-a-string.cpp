class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "AEIOUaeiou";
       
        int left = 0;
        int right = s.size()-1;

        while (right> left) {
            while ( vowels.find(s[left]) == string::npos && right> left) {
                left++ ;
            }
            while ( vowels.find(s[right]) == string:: npos && right > left ) {
                right--;
            }
            swap(s[left], s[right]);
            left++;
            right--;
        }
        return s;
    }
};