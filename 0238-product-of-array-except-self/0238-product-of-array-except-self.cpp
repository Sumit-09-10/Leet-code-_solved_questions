class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sz = nums.size();

        vector<int> lp(sz);
        vector<int> rp(sz);
        vector<int> ans(sz);

        // Prefix products
        lp[0] = 1;
        for (int i = 1; i < sz; i++) {
            lp[i] = lp[i - 1] * nums[i - 1];
        }

        // Suffix products
        rp[sz - 1] = 1;
        for (int i = sz - 2; i >= 0; i--) {
            rp[i] = rp[i + 1] * nums[i + 1];
        }

        // Final answer
        for (int i = 0; i < sz; i++) {
            ans[i] = lp[i] * rp[i];
        }

        return ans;
    }
};