class Solution {
public:

int getNextnumber (int n) {
            int sum = 0;
            while ( n > 0) {
                int digit = n %10;
                sum = sum + digit*digit;
                n = n/10;
            }
            return sum;
        }

    bool isHappy(int n) {

        int slow =  getNextnumber(n);
        int fast = getNextnumber(getNextnumber(n));

        while ( slow != fast) {
            if (fast == 1) {
                return true;
            }
            slow = getNextnumber(slow);
            fast = getNextnumber(getNextnumber(fast));
        }
        return slow == 1;
    }
};