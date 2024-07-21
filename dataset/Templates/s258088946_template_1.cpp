template <typename Head, typename... Tail>
void debug(Head H, Tail... T) {
    cout << " " << H;
    debug(T...);
}