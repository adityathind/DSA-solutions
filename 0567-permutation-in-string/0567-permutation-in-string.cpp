class Solution {
public:
     bool isValid ( string s1, string window) {
            if (s1.length() != window.length()){
                return false;
            }

            int freq[26] = {0} ;

            for ( char c : s1 ) {
                freq[c - 'a']++;
            }
            for ( char c : window ) {
                freq[c - 'a']--;
            }
            for ( int i = 0; i < 26; i++){
                if (freq[i] != 0)
                return false;
            }
            return true;
        }
        
    bool checkInclusion(string s1, string s2) {
       if (s1.length() > s2.length()) {
    return false;
}
        int left = 0;
        int right = s1.length() - 1;
        string window = "" ;

       for ( int i = 0; i <= right; i++) {
            window.push_back(s2[i]);
       }

        while ( right < s2.length()) {
            if ( isValid (s1,window)) {
                return true;
            }
            left++;
            right++;
           
           if ( right  < s2.length()) {
                window.push_back(s2[right]);
                window.erase(window.begin());
           }

        }
        return false;
    }
};