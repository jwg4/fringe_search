#include <stdint.h>

#include "constants.h"

typedef int64_t Fringe;
typedef int16_t Row;

inline Fringe make_fringe(Row a, Row b, Row c, int16_t modulus, int16_t first_empty) {
  return (
    (a << 1) &
    (b << (WIDTH + 2)) &
    (c << (WIDTH * 2 + 3)) &
    (modulus << (WIDTH * 3 + PADDING_BIT_WIDTH)) &
    (first_empty << (WIDTH * 3 + PADDING_BIT_WIDTH + MODULUS_BIT_WIDTH))
  );
}

Fringe add_T_1(Fringe);
Fringe add_T_2(Fringe);
Fringe add_T_2(Fringe);
Fringe add_T_2(Fringe);
