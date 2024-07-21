template <class T>
void printArray(T Array, int N)
{
    for (int i = 0; i < N; ++i)
    {
        if (i > 0) cout << " ";
        cout << Array[i];
    }