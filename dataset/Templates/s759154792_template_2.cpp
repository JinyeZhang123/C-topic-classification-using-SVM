template <class T>
void printArray(T Array, int size)
{
    for (int i = 0; i < size; i++) {
        cout << Array[i];
        if (i != size - 1) cout << " ";
    }