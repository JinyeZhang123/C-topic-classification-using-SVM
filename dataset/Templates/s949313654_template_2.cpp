template<typename T>
class SegmentTree{
    private:
    ll N;
    T INF_VAL;
    T dat[NMAX * 2]; // 0 origin, A[i] = dat[i + N]

    T _query(ll l, ll r, ll l_responsible, ll r_responsible, ll i_dat){
        db_printf("query(%lld, %lld, %lld, %lld, %lld) called\n",
            l, r, l_responsible, r_responsible, i_dat);
        if (r < l_responsible || r_responsible < l) return INF_VAL;
        else if(l <= l_responsible && r_responsible <= r) return dat[i_dat];
        else return min(_query(l ,r, l_responsible, (l_responsible + r_responsible) / 2, i_dat * 2),
                        _query(l, r, (l_responsible + r_responsible) / 2 + 1, r_responsible, i_dat * 2 + 1));
    }