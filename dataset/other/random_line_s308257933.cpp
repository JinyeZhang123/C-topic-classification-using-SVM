        for(unsigned long j = 0, k = N - 1; k > i && (k % i != 0 || j < k); j += i, k -= i)ans = max(ans, tmp += s[j] + s[k]);
