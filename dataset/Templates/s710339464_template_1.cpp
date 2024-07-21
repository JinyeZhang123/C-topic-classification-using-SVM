template <class Abel> struct BIT {
    vector<Abel> dat[2];
    Abel UNITY_SUM = 0;						// to be set
    
    /* [1, n] */
    BIT(int n) { init(n); }