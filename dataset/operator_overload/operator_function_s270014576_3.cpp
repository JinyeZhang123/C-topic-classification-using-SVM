void operator*=(node& other){	// TODO merge node value to query value
			// merge other's "val" to our "val" only !!!! otherwise need modification
			val = max(val, other.val);
		}