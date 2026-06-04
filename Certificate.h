
#ifndef CERT
#define CERT
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "Util.h"
    // --- main ---
    typedef struct {
        uint8_t type;
        uint32_t cert_length; //uint24
        unsigned char* cert;
    } Cert;
    

#endif