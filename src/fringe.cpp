#include "fringe.h"

inline Fringe add_some_T(Fringe current, int64_t piece, int16_t height, char check_second_row){
  first_empty = (current & EMPTY_MASK) >> EMPTY_OFFSET;
  piece <<= first_empty + 1;
  if (piece & padding_mask) {
    return 0;
  }
  if (piece & current) {
    return 0;
  }
  Fringe added = current | piece;
  int16_t filled = first_empty + height;
  if (filled == WIDTH){
    modulus = (current & MODULUS_MASK) >> MODULUS_OFFSET;
    current = (current >> (WIDTH * 2 + 2)) & FIRST_TWO_ROWS_MASK;
    modulus = (modulus + 1) % MODULUS;
    current = current | (modulus << MODULUS_OFFSET);
  }
  current = current & (~EMPTY_MASK);
  current = current | (filled << EMPTY_OFFSET);
  return current;
}

Fringe add_T_1(Fringe current){
  const piece = make_piece(14, 4, 0);
  return add_some_T(current, piece, 3, 0);
}

Fringe add_T_2(Fringe current){
  const piece = make_piece(2, 3, 2);
  return add_some_T(current, piece, 1, 1);
}

Fringe add_T_3(Fringe current){
  const piece = make_piece(2, 7, 0);
  return add_some_T(current, piece, 1, 0);
}

Fringe add_T_4(Fringe current){
  const piece = make_piece(2, 6, 2);
  return add_some_T(current, piece, 1, 0);
}
