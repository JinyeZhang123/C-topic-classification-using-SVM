void operator+=(node& other){	// TODO merge 2 tag (existing tag, new tag) values 						
			// merge other's "tagval" to our "tagval" only !!!! otherwise need modification
			tagval += other.tagval;
		}