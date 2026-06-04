#include "Util.h"
#include <string.h>
void get_uint24_bytes(unsigned char* a, uint32_t b){
    uint32_t c = htonl(b);
    a[0] = (c >> 8) & 0xFF;
    a[1] = (c >> 16) & 0xFF;
    a[2] = (c >> 24) & 0xFF;
}
void get_uint24_num(uint32_t* a, unsigned char* b){
    *a = (b[0] << 8*(3-1)) | (b[1] << 8*(3-2)) | b[2];
}
void get_uint16_bytes(unsigned char* a, uint16_t b){
    uint16_t temp = htons(b);
    memcpy(a, &temp, 2);
}
void get_uint16_num(uint16_t* a, unsigned char* b){
    *a = (b[0] << 8*(2-1)) | (b[1]);
}
void get_uint32_bytes(unsigned char* a, uint32_t b){
    uint32_t temp = htonl(b);
    memcpy(a, &temp, 4);
}
void get_uint32_num(uint32_t* a, unsigned char* b){
    *a = (b[0] << 8*(4-1)) | (b[1] << 8*(4-2)) | (b[2] << 8*(4-3)) | (b[3]);
}
void combine_array(unsigned char* p, unsigned char* a, int a_len, unsigned char* b, int b_len){
    for(int i = 0; i<a_len+b_len;i++){
        p[i] = i<a_len ? a[i] : b[i-a_len]; 
    }
}