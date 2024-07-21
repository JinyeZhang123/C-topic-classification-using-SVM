      if (arr[pos] <= rem) ret = (ret + fun(pos + 1, rem - arr[pos], 1) + fun(pos + 1, rem - arr[pos], 2)) % mod;
