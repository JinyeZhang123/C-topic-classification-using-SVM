			if(f[i] == 0 || f[i] > f[nxt[j] + 1] + 1) f[i] = f[nxt[j] + 1] + 1, ha[i] = j, haa[i] = nxt[j] + 1;
