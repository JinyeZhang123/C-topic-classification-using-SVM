			if (lazy[tl] == M::id2()) data[tl] = M::op1(M::op2(data[tl * 2], lazy[tl * 2]), M::op2(data[tl * 2 + 1], lazy[tl * 2 + 1]));
