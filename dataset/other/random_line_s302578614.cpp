int ConvertInt(string s){ int a = 0; rep(i,s.size())if(s[i]!='-')a+=(s[i]-'0')*pow(10,(float)s.size()-i-1); return s[0]!='-'?a:-a;}
