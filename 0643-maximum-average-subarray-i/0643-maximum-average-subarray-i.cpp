class Solution {
    public:
        double findMaxAverage(vector<int>& nums, int k) {
            int n = nums.size();
            int maxSum = INT_MIN, sum = 0;
            int j = 0;

            for (int i = 0; i < n; i++) {
                sum += nums[i];
                if (i - j + 1 == k) {
                    maxSum = max(maxSum, sum);
                    sum -= nums[j];
                    j++;
                }
            }
            return static_cast<double>(maxSum) / k;
        }
    };
