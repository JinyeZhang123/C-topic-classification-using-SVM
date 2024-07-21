temptts int add(T f) { return f; } temptts int add(T f, Ts... ts) { return (f + add(ts...)) % mod; }
