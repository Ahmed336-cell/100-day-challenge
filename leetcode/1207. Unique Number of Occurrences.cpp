class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map <int,int>f;
        set<int>s;
        for(int i=0 ; i <arr.size() ; i++){
            f[arr[i]]++;
        }
        int counter=0;
        for(auto it:f){
            s.insert(it.second);
            counter++;
        }

        if(counter==s.size())
        return true;

        return false;


    }
};
