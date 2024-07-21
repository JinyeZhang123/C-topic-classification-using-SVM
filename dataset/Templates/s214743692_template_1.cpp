template<typename T>
std::vector<T> Unite(const std::vector<T>& A, const std::vector<T>& B)
{
    std::vector<T> Temp = A;
    Temp.insert(Temp.end(), B.begin(), B.end());
    return Temp;
}