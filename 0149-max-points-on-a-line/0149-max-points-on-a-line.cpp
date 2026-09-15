class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();

        if (n <= 2) 
            return n;

        int ans = 0;
        for (int i = 0; i<n; i++) {
            map<pair<int,int>,int> mpp;
            
            int currMax = 0;
            int duplicate = 0;
            for ( int j = i + 1; j<n; j++) {
                int dy = points[j][1] - points[i][1];
                int dx = points[j][0] - points[i][0];

                if ( dx == 0 && dy == 0) {
                    duplicate++;
                    continue;
                }

                int g = gcd(abs(dx),abs(dy));
                dx = dx/g;
                dy = dy/g;

                if ( dx < 0) {
                    dx = -dx;
                    dy = -dy;
                }
            
            if ( dy == 0) 
                dx = 1;
            if ( dx == 0) 
                dy = 1;
        
        mpp[{dy,dx}]++;

        currMax = max(currMax, mpp[{dy,dx}]);
            }
            ans = max ( ans, currMax + duplicate + 1); 
        }
        return ans;

    }
};