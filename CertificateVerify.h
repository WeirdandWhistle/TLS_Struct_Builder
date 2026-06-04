#ifndef CV
#define CV
#include "Util.h"
    // --- main ---
    typedef struct {
        uint16_t algorithm;
        uint16_t signature_length;
        unsigned char* signature;
    } CertificateVerify;

#endif