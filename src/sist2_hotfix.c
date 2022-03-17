#include "antiword.h"

static __thread ULONG buffer;

BOOL isOutOfBounds(ULONG offset, size_t size) {
    return offset >= buffer - size;
}

void setBufferSize(ULONG size) {
    buffer = size;
}
