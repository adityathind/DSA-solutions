class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int right = people.size()-1;
        int left = 0;
        int boats = 0;
        while (right > left) {
            if (people[right] + people[left] > limit) {
                boats++;
                right--;

            } else if (people[right]+people[left] <= limit ) {
                boats++;
                left++;
                right--;
            }
        }
        if (right == left) {
            boats++;
        }
        return boats;
    }
};