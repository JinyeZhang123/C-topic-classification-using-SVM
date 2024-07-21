template<typename Head, typename... Tail>
void debug(Head H, Tail... T)
{
    cout<<" "<<to_string(H);
    debug(T...);
}