node operator+(node other){		// TODO merge "val" of  children properly															
			return node(l, other.r, max(val, other.val) ,0);									
		}