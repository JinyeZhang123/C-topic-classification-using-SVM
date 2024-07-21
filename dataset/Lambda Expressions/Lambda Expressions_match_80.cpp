[&](int now, int rem, int sum)
		{
			if (rem == 0 && sum == s) return 1;
			if (now == 10 || rem == 0 || sum > s) return 0;
			return dfs(now + 1, rem, sum) + dfs(now + 1, rem - 1, sum + now);
		}