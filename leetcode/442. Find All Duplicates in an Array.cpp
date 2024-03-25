class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        const int MAX_NUM = 100000; 

         int frequency[MAX_NUM + 1] = {0};
         vector<int>dup;
   
    for (int num : nums) {
        frequency[num]++;
    }

   
   
    for (int i = 0; i <= MAX_NUM; ++i) {
        if (frequency[i] == 2) {
            dup.push_back(i);
        }
    }

    return dup;
    }
};
