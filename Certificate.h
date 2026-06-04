#ifndef CERT
#define CERT
#include "Util.h"
    // --- main ---
    typedef struct {
        uint8_t type;
        uint32_t cert_length; //uint24
        unsigned char* cert;
    } Cert;
    

#endif