class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pr(nums.size(),1);
        vector<int>su(nums.size(),1);
        vector<int>an(nums.size());
        for(int i =1 ; i < nums.size() ; ++i){
            pr[i]=pr[i-1]*nums[i-1];
        }
        for(int i =nums.size()-2 ; i >=0 ; --i){
            su[i]=su[i+1]*nums[i+1];
        }

        
       for(int i =0 ; i < nums.size() ; ++i){
            an[i]=su[i]*pr[i];
        }

        return an;

    }
};
