        ipow2[i] = i == 0 ? 1 : 1ll * ipow2[i-1] * (Z - Z / 2) % Z;
