      if(V[i] & 1) dp2[j] = min(dp2[j], dp2[j - V[i]] + 1);
