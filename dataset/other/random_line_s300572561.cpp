#define lambdify(x) [&](auto &&...args){ return x(forward<decltype(args)>(args)...); }
