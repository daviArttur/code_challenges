// https://leetcode.com/problems/two-sum/description/
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> hashMap;
        for(int i = 0; i < size(nums); i++) {
            hashMap[nums[i]] = i;
        }
  
        for(int i = 0; i < size(nums); i++) {
            int current = nums[i];
            int possibleSum = hashMap[target - current];

            if (possibleSum != 0 && i != hashMap[target - current]) {
                result.push_back(i);
                result.push_back(hashMap[target - current]);
                break;
            }
        };
        return result;
    }
};
