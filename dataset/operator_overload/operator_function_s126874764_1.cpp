mcxi_t operator+(const mcxi_t &mcxi) {
    mcxi_t added("");
    added.i = i + mcxi.i;
    added.x = x + mcxi.x;
    added.c = c + mcxi.c;
    added.m = m + mcxi.m;
    if (added.i >= 10) {
      added.i %= 10;
      added.x++;
    }