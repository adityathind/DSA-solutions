class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int left = 0;
        int right = people.size() - 1;
        int boats = 0;

        while ( right >= left ) {
            if (people[right] + people[left] <= limit) {
                right--;
                left++;
            } else {
                right--;
            }
            boats++;
        }
        return boats;
    }
};