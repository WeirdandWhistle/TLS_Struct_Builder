#ifndef SH
#define SH
#include "Util.h"

    typedef struct {
        unsigned char* legacy_version; // = 0x0303;    /* TLS v1.2 */
        unsigned char* random;
        uint8_t legacy_session_id_echo_length;
        unsigned char* legacy_session_id_echo; // <0..32>; 
        unsigned char* cipher_suite;
        uint8_t legacy_compression_method; // = 0;
        uint16_t extensions_length;
    } ServerHello;

#endif