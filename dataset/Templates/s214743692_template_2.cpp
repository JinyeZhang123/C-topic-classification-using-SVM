template<typename T>
T GetGreatestCommon(const std::vector<T>& A, const std::vector<T>& B)
{
    std::vector<T> Temp = Unite(A, B);
    std::sort(Temp.begin(), Temp.end());
    return *(std::adjacent_find(Temp.rbegin(), Temp.rend()));
}