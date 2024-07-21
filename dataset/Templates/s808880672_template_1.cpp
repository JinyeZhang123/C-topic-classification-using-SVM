template <class Abel> struct BIT {
	vector<Abel> dat;
	Abel UNITY_SUM = 0;						// to be set

	/* [1, n] */
	BIT(int n) : dat(n, UNITY_SUM) { }