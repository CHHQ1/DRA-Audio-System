#include <stdint.h>

#define HUFFBITS uint16_t
#define HUFFBOOKCNT 1

struct HuffCodeBook {
    unsigned int len;
    const HUFFBITS* BitIncr;
    const HUFFBITS* Code;
    const HUFFBITS* Index;
};

extern struct HuffCodeBook HuffDec1_7x1;
extern struct HuffCodeBook HuffDec1_7x2;