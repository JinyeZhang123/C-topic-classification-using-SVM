template<std::uint_fast64_t B = 524287>
struct rolling_hash {
	using u32 = std::uint_fast32_t;
	using u64 = std::uint_fast64_t;
	using i128 = __int128_t;
	using size_type = std::size_t;

private :
	static constexpr u64 base = B;
	static constexpr u64 mod = (1UL << 61) - 1;

	std::vector<u64> hash, pow;

	u64 mul (const i128 &a, const i128 &b) const noexcept {
		i128 value = a * b;
		value = (value >> 61) + (value & mod);
		return (value < mod ? value : value - mod);
	}