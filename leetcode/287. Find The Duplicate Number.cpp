class Solution {
    
public:
    int findDuplicate(vector<int>& nums) {
        const int MAX_NUM = 100000; 

         int frequency[MAX_NUM + 1] = {0};

   
    for (int num : nums) {
        frequency[num]++;
    }

   
    int maxFrequency = 0;
    int mostDuplicateNumber = 0;
    for (int i = 0; i <= MAX_NUM; ++i) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
            mostDuplicateNumber = i;
        }
    }

    return mostDuplicateNumber;

    }
};


//another solution but worst
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>fre;

        for(int num :nums){
            fre[num]++;
        }

        int maxNumber=0;
        int mostDuplicate=0;
        for (const auto& pair : fre) {
        if (pair.second > maxNumber) {
            maxNumber = pair.second;
            mostDuplicate = pair.first;
        }
    }

    return mostDuplicate;


    }
};
