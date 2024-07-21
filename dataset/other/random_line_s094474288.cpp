  cout << (n % (a+b) == 0 ? a*(n/(a+b)) : a*(n/(a+b))+min(n%(a+b),a)) << endl;
