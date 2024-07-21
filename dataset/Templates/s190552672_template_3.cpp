template <class InputIterator>
auto sum(InputIterator iterator)
{
    return accumulate(iterator.begin(), iterator.end(), 0);
}