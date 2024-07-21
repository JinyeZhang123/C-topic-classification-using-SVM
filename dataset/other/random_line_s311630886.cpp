	fw (i, 0, n + 1) psum[i] = (i ? psum[i - 1] : 0) + v[i].val;
