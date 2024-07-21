bool operator <(node a,node b)
    {
        for (int i=0;i<4;i++)
            if (a.col[i]!=b.col[i]) return a.col[i]<b.col[i];
        return 0;
    }