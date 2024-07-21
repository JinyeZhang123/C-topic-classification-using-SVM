	return (void)(DFS(1<<j,y,cs^(1<<i)),DFS(x^(1<<i)^(1<<j),y^(1<<i)^(1<<j),cs^(1<<i)));
