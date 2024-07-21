template <typename Head, typename... Tail> void debug_out(Head H, Tail... T)
    { cerr << " " << H; debug_out(T...); }