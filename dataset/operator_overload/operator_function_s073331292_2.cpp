bool operator==(const Polygon &p){
		Polygon t = p;

		if( maxv != t.maxv )
			return false;
		
		for(int r = 0; r < 4; ++r){
			for(int i = 0; i < maxv; ++i){
				for(int j = 0; j < maxv; ++j){
					bool bSame = true;
					Polygon s = t.Translation( j, *this, i );
					for(int k = 0; k < maxv; ++k){
						if( !(s.vertex[k] == this->vertex[k]) ){
							bSame = false;
							break;
						}