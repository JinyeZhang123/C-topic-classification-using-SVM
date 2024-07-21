				memo[sz][i] = min(memo[sz][i], memo[sz2][i] + memo[sz-sz2][i+sz2]);
