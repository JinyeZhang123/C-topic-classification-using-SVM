template <class InputIterator, class T>
bool contains_itr(InputIterator iterator, const T &value)
{
    if (find(iterator.begin(), iterator.end(), value) == iterator.end())
        return false;
    else
        return true;
}