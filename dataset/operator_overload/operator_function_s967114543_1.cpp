bool operator<(const pair<ll, ll> &a, const pair<ll, ll> &b)
{

    if (a.first == b.first)
        return a.second < b.second;

    return a.first < b.first;
}