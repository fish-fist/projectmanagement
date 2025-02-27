#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end()) {
                return { numMap[complement], i };
            }
            numMap[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = { 2, 7, 11, 15 };
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty()) {
        cout << "找到两个数，它们的下标分别是: " << result[0] << " 和 " << result[1] << endl;
    }
    else {
        cout << "没有找到符合条件的两个数1111111111111111。" << endl;
    }

    return 0;
}
