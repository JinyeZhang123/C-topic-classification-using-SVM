virtual void Merge(vector<char>& out, const vector<char>& a, const vector<char>& b)
    {
        out = a;
        for(auto x : b)
        {
            if(find(out.begin(), out.end(), x) == out.end())
            {
                out.push_back(x);
            }