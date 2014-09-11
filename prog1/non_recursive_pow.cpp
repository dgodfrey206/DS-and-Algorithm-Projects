uintmax_t pow(uintmax_t base, uintmax_t exp)
{
	uintmax_t val = 1;

	while (--exp)
		val *= base;
	return val;
}
