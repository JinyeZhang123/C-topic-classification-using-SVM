void err(T<t> a, A... x) { for (auto v: a) cout << v << ' '; err(x...); }
