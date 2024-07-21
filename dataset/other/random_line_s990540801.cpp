		return memo[day][eated][num] = dfs(day + 1, eating, (eated == eating ? num + 1 : 1));
