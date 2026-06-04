#ifndef UTIL
#define UTIL
#include <stdint.h>
    void get_uint24_bytes(unsigned char* a, uint32_t b);
    void get_uint24_num(uint32_t* a, unsigned char* b);
    void get_uint16_bytes(unsigned char* a, uint16_t b);
    void get_uint16_num(uint16_t* a, unsigned char* b);
    void get_uint32_bytes(unsigned char* a, uint32_t b);
    void get_uint32_num(uint32_t* a, unsigned char* b);
    void combine_array(unsigned char* p, unsigned char* a, int a_len, unsigned char* b, int b_len);

#endif