    ans = min(ans, dp((N + 4) / 5, A, B, C, D, mp) + C + (5 - N % 5) % 5 * D);
