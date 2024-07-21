template<typename A, size_t N, typename T>
void Fill(A (&a)[N], const T &v){ fill( (T*)a, (T*)(a+N), v ); }