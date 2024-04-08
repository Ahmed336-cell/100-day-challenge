class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int freq[2]={0};
        for(int st : students )
        freq[st]++;

        int sandwitchesNumber=sandwiches.size();
        for(int san : sandwiches){
            if(freq[san]==0)
            break;
            if(sandwitchesNumber == 0)
            break;
            freq[san]--;
            sandwitchesNumber--;
        }
        return sandwitchesNumber;
    }
};
