class Solution {
public:
    long long minimumSteps(string s) {

    long long black = 0;
    long long steps = 0;

        for (char c : s) {
            if (c == '1') {
                black++;
            } else {
                steps += black;
            }
        }

        return steps;

    }
};