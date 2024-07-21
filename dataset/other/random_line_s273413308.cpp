		if (q[l].num<q[r].num) q[r].num+=q[l].num,dis[r]+=dis[l]+((t!=0)?(q[r].len-q[l].len):0),t=0,l++;
