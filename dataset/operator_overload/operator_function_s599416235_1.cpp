void operator+=( const largeInt& a ){
		numStr = "";
		for ( int i = 0; i < 10; ++i ){
			num[ i ] += a.num[ i ];
			if ( num[ i ] / 100000000 && i != 9 ){
				num[ i ] -= 100000000;
				num[ i + 1 ] += 1;
			}