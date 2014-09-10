#include <cstdint>

uintmax_t fact(uintmax_t n)
{
    if (n <= 0) return 1;
    int prod = 1;
    
    for (int i = 1; i <= n; ++i)
        prod *= i;
        
    return prod;
}
