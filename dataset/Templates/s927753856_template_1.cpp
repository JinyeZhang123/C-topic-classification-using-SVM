template <typename T, typename... Types>
T add(T var1, Types... var2){
    return (((((ll)(var1)) % mod + (ll)(add(var2...))) % mod) + mod) % mod;
}