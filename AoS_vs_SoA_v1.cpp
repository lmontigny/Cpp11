// ----- annex -----
struct {
    uint8_t r, g, b;
} AoS[N];

struct {
    uint8_t r[N];
    uint8_t g[N];
    uint8_t b[N];
} SoA;

/*
Choice of AoS versus SoA for optimum performance usually depends on access pattern.

If you are going to be accessing the R/G/B components of each pixel
concurrently then AoS usually makes sense, since the successive reads 
of R, G, B components will be contiguous and usually contained within
the same cache line. For CUDA this also means memory read/write coalescing.

However if you are going to process color planes separately then SoA might 
be preferred, e.g. if you want to scale all R values by some scale factor, 
then SoA means that all R components will be contiguous.
*/
