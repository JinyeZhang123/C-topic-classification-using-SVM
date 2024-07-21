template <class InputIterator>
int sum(InputIterator begin, InputIterator end)
{
    return accumulate(begin, end, 0ll);
}