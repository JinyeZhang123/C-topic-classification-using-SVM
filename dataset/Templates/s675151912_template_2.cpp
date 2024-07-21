template<typename A>
string to_string(A v)
{
    bool first=1; string res="{";
    for(const auto &x:v)
    {
        if(!first)  res+=", ";
        first=0;
        res+=to_string(x);
    }