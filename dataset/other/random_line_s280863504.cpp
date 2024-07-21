		if(i&1) mn[i]=max(mn[i],min(mx[i],tmp-dt[i-1])),dt[i]=max(mn[i-1]+dt[i-1]-tmp,0)-mn[i];
