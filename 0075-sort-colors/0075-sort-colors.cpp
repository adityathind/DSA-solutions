class Solution {
public:
    void sortColors(vector<int>& nums) {
        int slow = 0;
        int fast = 0;

    for ( int x = 0; x < 3; x++ ) {
        fast = slow;
        for ( int fast = slow ; fast < nums.size(); fast++ ) {
                if ( nums[fast] == x ) {
                    swap(nums[fast],nums[slow]);
                    slow++;
                }
        }
    } 
    return ;   

    }
};