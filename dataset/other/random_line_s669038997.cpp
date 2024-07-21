			if(col[idd][id(tx + dx,ty + dy)] == -1) { col[idd][id(tx + dx,ty + dy)] = 1 - col[idd][u]; dfs(id(tx + dx,ty + dy),idd); }
