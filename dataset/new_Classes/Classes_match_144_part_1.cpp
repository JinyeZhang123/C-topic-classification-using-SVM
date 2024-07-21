class Bomb{
public:
	Bomb() : count( 0 ){
		for ( int i = 0; i < ( SIZE + 2 ) * ( SIZE + 2 ); ++i ){
			field[ i ] = -1;
		}                                                                            