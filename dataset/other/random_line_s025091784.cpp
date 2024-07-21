		return memo[i][W] = (count(i+1,W-a[i])+2*count(i+1,W))%MOD;
