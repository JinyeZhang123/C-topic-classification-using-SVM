			if(ch[i]!='0') dp[i][j]=(dp[i][j]+dp[i+1][automata[j][1]])%MOD;
