void operator*=(int v) {
//         if (v < 0)
//             sign = -sign, v = -v;
//         for (int i = 0, carry = 0; i < (int) z.size() || carry; ++i) {
//             if (i == (int) z.size())
//                 z.push_back(0);
//             long long cur = z[i] * (long long) v + carry;
//             carry = (int) (cur / base);
//             z[i] = (int) (cur % base);
//             //asm("divl %%ecx" : "=a"(carry), "=d"(a[i]) : "A"(cur), "c"(base));
//         }