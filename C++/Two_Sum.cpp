class Solution {
  public:
    vector < int > twoSum(vector < int > & nums, int target) {

      vector < int > t = nums;
      vector < int > ans;
      sort(nums.begin(), nums.end());

      int n = nums.size();
      int i = 0, j = n - 1;

      while (i < j) {
        if (nums[i] + nums[j] < target) {
          i++;
        } else if (nums[i] + nums[j] > target) {
          j--;

        } else {
          break;
        }
      }
      int a = nums[i], b = nums[j];

      for (int i = 0; i < n; i++) {
        if (a == t[i]) ans.push_back(i);
        else if (b == t[i]) ans.push_back(i);
      }

      return ans;

    }
};