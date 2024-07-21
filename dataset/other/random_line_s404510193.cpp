			dp[S] = std::min(dp[S], dp[T] + dp[S ^ T]);
