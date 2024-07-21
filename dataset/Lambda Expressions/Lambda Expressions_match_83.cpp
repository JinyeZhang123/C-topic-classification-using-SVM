[&](int left, int right, int idx)
			{
				if (idx == 10) return true;
				int x = balls[idx];
				return (left < x && dfs(x, right, idx + 1)) ||
					(right < x && dfs(left, x, idx + 1));
			}