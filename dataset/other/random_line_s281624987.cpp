	LL res1 = dp(i + 1, j, H[i]) + std::max(nums[H[i] - 1] - (k == 0 ? 0 : nums[k - 1]), 0LL);
