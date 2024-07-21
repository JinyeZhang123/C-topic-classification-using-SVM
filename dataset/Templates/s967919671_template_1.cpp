template<typename stl>
void show_vec(const stl& x)
{
    for(auto i : x)
        cerr << i << ' ';
    cerr << '\n';
}