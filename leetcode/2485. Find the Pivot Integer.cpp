class Solution {
public:
    int pivotInteger(int n) {
        double x= n*(n + 1)/2;
        double pivot= sqrt(x);
        if(pivot==floor(pivot)){
            return int(pivot);
        }else{
            return -1;
        }
    }
};
