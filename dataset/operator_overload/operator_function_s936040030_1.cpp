T operator*(const vector<T> &a, const vector<T> &b)
{
    T total = 0;
    auto bi = b.begin();
    for(auto &x : a) 
        total += x * *bi++;
    return total;
}