            int t = upper_bound(L.begin() + j + 1, L.end(), L[i] + L[j] - 1) - lower_bound(L.begin() + j + 1, L.end(), L[j] - L[i] + 1);
