		if(i != last) best = max(best, A[i][pos] + solve(pos+1,i) );
