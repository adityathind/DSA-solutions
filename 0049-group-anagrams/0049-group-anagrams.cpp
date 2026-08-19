class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<pair<string, string>> v;

        for (string s : strs) {

            string key = s;
            sort(key.begin(), key.end());
            v.push_back({key, s});
        }
        sort(v.begin(), v.end());

        vector<vector<string>> ans;

         for (int i = 0; i < v.size(); i++) {

            vector<string> group;
            group.push_back(v[i].second);

            while (i + 1 < v.size() &&
                   v[i].first == v[i + 1].first) {

                group.push_back(v[i + 1].second);
                i++;
            }
            ans.push_back(group);
         }
         return ans;

    }
};