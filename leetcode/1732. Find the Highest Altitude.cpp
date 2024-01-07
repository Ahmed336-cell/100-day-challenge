class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>v{0};
        for (int i =0 ; i < gain.size();i++){
            v.push_back(gain[i]+v.back());
        }

        return *max_element(v.begin(),v.end());
    }
};
