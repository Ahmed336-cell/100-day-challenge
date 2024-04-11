class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        string re;

        for(char ch:num){
            while(!st.empty()&& k>0 && st.top()>ch){
                st.pop();
                k--;
            }
            st.push(ch);
        }
         while(k>0 && !st.empty()){
            st.pop();
            k--;
         }     
      while(!st.empty()){
        re+=st.top();
        st.pop();
      }
      reverse(re.begin(),re.end());
        size_t pos = re.find_first_not_of('0');
        re = (pos == string::npos) ? "0" : re.substr(pos);
      return re;
    }
};
