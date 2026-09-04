class Solution {
public:        
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) {
            return false;
        }

        int freq1[26] = {0};
        int freq2[26] = {0};

        for ( char c : s1) {
            freq1[c - 'a']++;
        }

        int left = 0;
        for ( int right = 0; right < s2.length(); right++) {
            freq2[ s2[right] - 'a']++;

            if ( right - left + 1 > s1.length() ) {
                freq2[s2[left] - 'a']--;
                left++;
            }
            bool same = true;
            
            for ( int i = 0; i < 26; i++) {
                if (freq1[i] != freq2[i]) {
                    same = false;
                    break;
                }
            }
            
            if (same) {
                return true;
            }

        }
        return false;
       
    }
};