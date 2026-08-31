class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int n = nums.size();
        vector<int> prefix(n+1,0);

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }
        int best = INT_MAX;

        for( int i = 0 ; i <= n; i++) {
            int needed = prefix[i] + target;
            int right = n;
            int left = i;
            while ( left < right) {
                int mid = left + (right - left)/2;
                if ( prefix[mid] >= needed) {
                    right = mid;
                } else {
                    left = mid+1;
                }
            }
            if (left <= n && prefix[left] >= needed)
                best = min(best, left - i);
        }
        return best == INT_MAX ? 0 : best;

    
    }
};