bool operator<(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first == b.first)
    {
        return b.second > a.second;
    }