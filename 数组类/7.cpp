#include<iostream>
using namespace std;

//整数反转，注意int越界，对于正整数，如果res>INT_MAX/10，或者 res==INT_MAX/10 && 余数大于7
//必定越界，对于负整数，res<INT_MIN/10 ...


class Solution {
public:
    int reverse(int x) {
        int res=0;
        while(x!=0){
            int pop=x%10;
            x  = x/10;
            if(res>INT_MAX/10 || (res==INT_MAX/10 && pop>7))
                return 0;
            if(res<INT_MIN/10 || (res==INT_MIN/10 && pop<-8))
                return 0;
            res = res*10 + pop;
        }
        return res;
        
    }
};
int main(){
    int x = 123;
    Solution s1;
    int num = s1.reverse(x);
    cout << num << endl;
    return 0;

}