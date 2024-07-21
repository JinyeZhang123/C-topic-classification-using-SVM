#define smallest_on_bit(bit_mask) (__builtin_ctzint((bit_mask) & (-(bit_mask))))
