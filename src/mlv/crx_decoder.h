#ifndef MLV_CRX_DECODER_H
#define MLV_CRX_DECODER_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif
int crx_decode_frame(const uint8_t *input, size_t input_size,
                     uint16_t *output, uint32_t width, uint32_t height);

#ifdef __cplusplus
}
#endif

#endif
