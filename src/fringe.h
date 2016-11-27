#include <stdint.h>

#include "constants.h"

typedef int64_t Fringe;
typedef int16_t Row;

inline Fringe make_fringe(Row a, Row b, Row c, int16_t modulus, int16_t first_empty) {
  return (
    (a << 1) &
    (b << (WIDTH + 2)) &
    (c << (WIDTH * 2 + 3)) &
    (modulus << (CELL_BIT_WIDTH + PADDING_BIT_WIDTH)) &
    (first_empty << (CELL_BIT_WIDTH + PADDING_BIT_WIDTH + MODULUS_BIT_WIDTH))
  );
}

Fringe overflow_mask = (
  1 
  & (1 << (WIDTH + 1))
  & (1 << (2 * WIDTH + 2))
  & (1 << (3 * WIDTH + 3))
)

Fringe add_T_1(Fringe);
Fringe add_T_2(Fringe);
Fringe add_T_2(Fringe);
Fringe add_T_2(Fringe);
