#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indexMap;
        
        for (int i = 0; i < (int)nums.size(); i++) {
            int complement = target - nums[i];
            
            if (indexMap.find(complement) != indexMap.end()) {
                return {indexMap[complement], i};
            }
            
            indexMap[nums[i]] = i;
        }
        
        return {};
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    Solution solution;
    vector<int> result = solution.twoSum(nums, target);
    
    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
