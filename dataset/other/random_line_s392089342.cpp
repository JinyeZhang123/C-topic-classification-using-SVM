		if(target > val[i]) return solve(target, val+1, size - i - 1) || solve(target - val[i], val+1, size - i - 1);
