template <typename D, typename T = D, typename L = T>
class Tree
{
public:
	Tree( long long int size = 0, D InitialValueArg = D() ) {
		long long int n = 1LL;
		CalcTree.emplace_back( vector<TreeNode>( n ) );
		while( n <= size ) {
			n <<= 1LL;
			addOneLine( n );
		}