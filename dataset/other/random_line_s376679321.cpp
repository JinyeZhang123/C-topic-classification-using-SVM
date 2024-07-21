    ModInt(i64 x){p = x >= 0 ? x % mod : x + (-x + mod - 1) / mod * mod;}
