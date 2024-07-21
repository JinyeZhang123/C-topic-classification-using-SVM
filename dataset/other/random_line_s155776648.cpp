        partial_sum(hoge.begin(), hoge.end() - 1, piyo.begin() + 1, [&MOD](auto a, auto b){return a * b % MOD;});
