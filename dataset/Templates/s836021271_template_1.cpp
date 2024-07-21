template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
    cout << H << " ";
    debug_out(T...);
}