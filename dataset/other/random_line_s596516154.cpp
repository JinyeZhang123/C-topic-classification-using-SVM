    dp1[i]=max(dp1[i+gb] + (ga-gb) , max(dp1[i+sb] + (sa-sb)   , max(dp1[i+bb] + (ba-bb), dp1[i+1] ) ) );
