
// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
 
// Example 1:
// Input: nums = [3,2,3]
// Output: [3]
// Example 2:
// Input: nums = [1]
// Output: [1]
// Example 3:
// Input: nums = [1,2]
// Output: [1,2]

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
     vector<int> more_than_Element(vector<int>& nums) {
        int n = nums.size();
        int num1 = 0, num2 = 0, cnt1 = 0, cnt2 = 0;

        for (int num : nums) {
            if (num == num1) {
                cnt1++;
            } else if (num == num2) {
                cnt2++;
            } else if (cnt1 == 0) {
                num1 = num;
                cnt1 = 1;
            } else if (cnt2 == 0) {
                num2 = num;
                cnt2 = 1;
            } else {
                cnt1--;
                cnt2--;
            }
        }

        cnt1 = 0, cnt2 = 0;
        for (int num : nums) {
            if (num == num1) {
                cnt1++;
            } else if (num == num2) {
                cnt2++;
            }
        }

        vector<int> result;
        if (cnt1 > n / 3) {
            result.push_back(num1);
        }
        if (cnt2 > n / 3) {
            result.push_back(num2);
        }

        return result;

    }
};
int main() {
    vector<int> nums = {3, 2, 3};
    Solution sol;
    vector<int> result = sol.more_than_Element(nums);

    cout << "Output: [";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
