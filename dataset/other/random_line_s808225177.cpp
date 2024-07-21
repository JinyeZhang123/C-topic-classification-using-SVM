    for (int i=1;i<=n;i++) for (int j=i+1;j<=n;j++) if (!Mark[i]&&!Mark[j]&&!(B[i]&B[j]).any()) ++Ans;
