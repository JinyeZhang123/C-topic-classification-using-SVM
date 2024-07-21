template <typename T>
class BinaryIndexedTree
{
    std::vector<T> arr;
    const std::size_t size;
    const std::function<T(const T, const T)> operation;
    const T initial_value;

    void initialize_array()
    {
        this->arr = std::vector<T>(this->size, this->initial_value);
    }