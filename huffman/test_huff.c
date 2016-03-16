#include <stdio.h>
#include "../bitstream/bitstream.h"
#include "../util/vector.h"
#include "../util/errors.h"
#include "huffcoding.h"
#include "huffbook.h"

int main() {
    struct vector* v = vector_init();
    struct bit_stream* bs = bitstream_init();

    vector_push_back_int32(v, 4);
    vector_push_back_int32(v, 5);
    vector_push_back_int32(v, 6);
    vector_push_back_int32(v, 3);
    vector_push_back_int32(v, 3);
    vector_push_back_int32(v, 2);
    vector_push_back_int32(v, 1);
    vector_push_back_int32(v, 1);
    vector_push_back_int32(v, 0);
    vector_print_int32(v);

    huff_encode(&HuffDec1_7x1, v, bs);
    bitstream_print(bs);
    
    vector_destroy(v);
    bitstream_destroy(bs);
}