                dp[i][j] = dp[i - 1][j] + (board[i - 1][j] == '.' && board[i][j] == '#');
