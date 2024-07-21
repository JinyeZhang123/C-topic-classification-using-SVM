	cout << max(K+1, max(0ll,(K+1-A)/2)*(B-A)+((K>A-2)?A:0)+(((K+1-A)/2>0)?((K+1-A)%2):0)) << endl;
