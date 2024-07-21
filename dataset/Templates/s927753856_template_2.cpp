template <typename T, typename... Types>
T mul(T var1, Types... var2){
    return (((ll)(var1)) % mod * (ll)(mul(var2...))) % mod;
}