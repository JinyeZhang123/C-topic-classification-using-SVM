template<class T> class LazySegmentTree {
	size_t length;               //セグメント木の最下段の要素の数(vectorの要素の数を超える2べきの数)
	size_t height;               //セグメント木の高さ 
	T unitNode;                  //npdeの単位元
	T unitLazy;                  //lazyの単位元
	vector<T> node;              //node
	vector<T> lazy;              //lazy
	vector<int> width;           //width
	function<T(T,T)> funcNode;   //node同士の演算
	function<T(T,T)> funcLazy;   //lazy同士の演算
	function<T(T,T)> funcMerge;  //nodeとlazyの演算
	function<T(T,T)> funcRange;  //lazyの区間処理の演算

public:
	//vectorで初期化
	LazySegmentTree(const vector<T> & vec, const T unitNode, const T unitLazy, function<T(T,T)> funcNode, function<T(T,T)> funcLazy,function<T(T,T)> funcMerge, function<T(T,T)> funcRange)
	 : unitNode(unitNode), unitLazy(unitLazy), funcNode(funcNode),funcLazy(funcLazy),funcMerge(funcMerge), funcRange(funcRange) {
		for (length = 1,height = 0; length < vec.size(); length *= 2, height++);
		node.resize(2 * length, unitNode);
		lazy.resize(2 * length, unitLazy);
		for (int i = 0; i < vec.size(); ++i) node[i + length] = vec[i];
		for (int i = length - 1; i >= 0; --i) node[i] = funcNode(node[(i<<1)+0],node[(i<<1)+1]);
		width.resize(2 * length, 0);
		for(int i = length; i < 2*length; ++i) for(int j = i, k = 1; j && !width[j] ; j >>= 1,k <<= 1) width[j] = k;
	}