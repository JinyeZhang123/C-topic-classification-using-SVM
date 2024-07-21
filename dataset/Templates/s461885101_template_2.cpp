template<size_t N>
int edit_distance_bitset(const string& s1, const string& s2)
{
    int m = s1.size();
    int n = s2.size();

    const bitset<N> ONE(1);
    bitset<N> Peq[0x100];
    bitset<N> Pv, Mv, Eq, Xv, Xh, Ph, Mh;
    int Score = m;

    for (int i = 0; i < m; i++) {
        Peq[s1[i]] |= ONE << i;
        Pv |= (ONE << i);
    }