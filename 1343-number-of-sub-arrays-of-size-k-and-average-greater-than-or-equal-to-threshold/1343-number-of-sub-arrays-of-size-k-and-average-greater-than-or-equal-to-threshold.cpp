class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ans = 0;
        int sum = 0;
        for ( int i = 0; i < k; i++) {
            sum = sum + arr[i];
        }
        int average = sum/k;
        if (average >= threshold) {
            ans++;
        }

        for ( int i = k; i < arr.size(); i++) {
            sum = sum + arr[i];
            sum = sum - arr[i-k];
            average = sum/k;
            if (average>= threshold) {
                ans++;
            }
        }
        return ans;
    }
};