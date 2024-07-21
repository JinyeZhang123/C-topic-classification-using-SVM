template<typename T>
struct SqrtDecomposition {
private:
	const int sqrtN = 1024;
	T N, K;
	vector<T> data;
	vector<T> bucketAdd;
public:
	SqrtDecomposition(T n) : N(n) {
		K = (N + sqrtN - 1) / sqrtN;
		data.assign(K * sqrtN, 0);
		bucketAdd.assign(K, 0);
	}