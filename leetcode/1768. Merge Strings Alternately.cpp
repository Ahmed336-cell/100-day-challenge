class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        if(word1.length()>word2.length()){
                    for (int i=0 ; i<word1.length() ;i++){
                        if(i<word1.length())
                        s+=word1[i];

                        if(i<word2.length())
                        s+=word2[i];
                    }

        }else{
             for (int i=0 ; i<word2.length() ;i++){
                        if(i<word1.length())
                        s+=word1[i];

                        if(i<word2.length())
                        s+=word2[i];
                    }

        }

        return s;
    }
};
