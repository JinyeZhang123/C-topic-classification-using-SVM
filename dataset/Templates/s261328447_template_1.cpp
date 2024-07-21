template <typename D, typename T = D>
class Tree
{
public:
	Tree( long long int size = 0, D InitialValueArg = D() ) {
		long long int n = 1LL;
		CalcTree.emplace_back( vector<T>( n ) );
		while( n <= size ) {
			n <<= 1LL;
			addOneLine( n );
		}