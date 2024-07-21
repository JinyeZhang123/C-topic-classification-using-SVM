int main() {
//    ifstream in("input.txt");
//    cin.rdbuf(in.rdbuf());

    int n, w, h;
    int p, ss, sp;
    while (cin >> n >> w >> h, (n != 0 || w != 0 || h != 0)) {
        vector <P> cake;
        cake.pb(P(0, w, 0, h, w * h));
        rep(i, n) {
            cin >> p >> ss;
            int cl = cake[p - 1].l;
            int cr = cake[p - 1].r;
            int ct = cake[p - 1].t;
            int cb = cake[p - 1].b;
            int cw = cr - cl;
            int ch = cb - ct;
            int mod = (cw + ch) * 2;
            int s = ss % mod;
            // cout << s << endl;
            P c1; P c2;
            if ((s < cw) || (cw + ch < s && s < cw + ch + cw)) {
                if (s < cw) sp = cl + s;
                else sp = cl + (cw - (s - ch - cw));
                // cout << sp << endl;
                c1 = P(cl, sp, ct, cb);
                c2 = P(sp, cr, ct, cb);
            }