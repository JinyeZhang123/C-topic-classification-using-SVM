        ans = max({ans, LCS(now + 1, rev_now - 1, used - 1) + 1});
