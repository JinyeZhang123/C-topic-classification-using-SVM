    void update(int e, V val) {e++; while(e<=1<<ME) bit[e-1]+=val,e+=e&-e;}
