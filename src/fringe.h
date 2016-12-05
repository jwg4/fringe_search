#include <stdint.h>

#include "constants.h"

typedef int64_t Fringe;
typedef int16_t Row;

inline Fringe make_fringe(Row a, Row b, Row c, int16_t modulus, int16_t first_empty) {
  return (
    ((int64_t)a << 1) &
    ((int64_t)b << (WIDTH + 2)) &
    ((int64_t)c << (WIDTH * 2 + 3)) &
    ((int64_t)modulus << (CELL_BIT_WIDTH + PADDING_BIT_WIDTH)) &
    ((int64_t)first_empty << (CELL_BIT_WIDTH + PADDING_BIT_WIDTH + MODULUS_BIT_WIDTH))
  );
}

inline Fringe make_piece(Row a, Row b, Row c) {
return (
    a &
    (b << (WIDTH + 1)) &
    (c << (WIDTH * 2 + 2))
  );
}

Fringe add_T_1(Fringe);
Fringe add_T_2(Fringe);
Fringe add_T_2(Fringe);
Fringe add_T_2(Fringe);
