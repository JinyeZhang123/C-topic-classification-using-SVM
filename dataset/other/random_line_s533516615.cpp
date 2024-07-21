        cout << (dp_w[i] + (1 - (dp_w[i] + dp_b[i]) % mod + mod) * div_mod(2)) % mod << endl;
