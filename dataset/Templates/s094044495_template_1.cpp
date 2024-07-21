template<class T>
class C_Matrix {
private:
	vector<vector<T> > m_val;
public:
	C_Matrix(T n, T m) {
		vector<T> vecZeros;
		REP(i, m) vecZeros.PB(0);
		REP(i, n) m_val.PB(vecZeros);
	}