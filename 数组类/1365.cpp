//返回数组中它小的个数
#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
 

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums) {
        vector<int> ret;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] < nums[i]) {
                    cnt++;
                }
            }
            ret.push_back(cnt);
        }
        return ret;
    }
};

// class Solution {
// public:
//     vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//         vector<int> cnt(101, 0);
//         int n = nums.size();
//         for (int i = 0; i < n; i++) {
//             cnt[nums[i]]++;
//         }
//         for (int i = 1; i <= 100; i++) {
//             cnt[i] += cnt[i - 1];
//         }
//         vector<int> ret;
//         for (int i = 0; i < n; i++) {
//             ret.push_back(nums[i] == 0 ? 0: cnt[nums[i]-1]);
//         }
//         return ret;
//     }
// };
int main(){
    class Solution s1;
    
    

    vector<int> num = {8, 1, 2, 8, 7};

    vector<int> cont = s1.smallerNumbersThanCurrent(num);
    cout << "[" ;
    for(int i=0;i<cont.size();i++){
       
        cout  << cont[i] <<", " ;
    }
    cout << "]";
    // a = cont[cout.begin(),cont.end()]
    // cout << cont[cout.begin(),cont.end()]<<endl;
 
    return 0;
}
