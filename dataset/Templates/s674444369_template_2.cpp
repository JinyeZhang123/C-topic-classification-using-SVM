template <class T>
bool contains_set(set<T> st, const T &value)
{
    if (st.find(value) == st.end())
    {
        return false;
    }