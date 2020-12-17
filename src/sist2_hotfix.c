#include "antiword.h"

static __thread ULONG buffer;

BOOL isOutOfBounds(ULONG offset) {
    return offset > buffer;
}

void setBufferSize(ULONG size) {
    buffer = size;
}
