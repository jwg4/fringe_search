#include "fringe.h"

inline Fringe add_some_T(Fringe current, int64_t piece, int16_t height, char check_second_row){
  int64_t first_empty = (current & FIRST_BLANK_MASK) >> FIRST_BLANK_OFFSET;
  piece <<= first_empty + 1;
  if (piece & PADDING_MASK) {
    return 0;
  }
  if (piece & current) {
    return 0;
  }
  Fringe added = current | piece;
  int16_t filled = first_empty + height;
  if (filled == WIDTH){
    int16_t modulus = (current & MODULUS_MASK) >> MODULUS_OFFSET;
    current = (current >> (WIDTH * 2 + 2)) & FIRST_TWO_ROWS_MASK;
    modulus = (modulus + 1) % MODULUS;
    current = current | (modulus << MODULUS_OFFSET);
  }
  current = current & (~FIRST_BLANK_MASK);
  current = current | (filled << FIRST_BLANK_OFFSET);
  return current;
}

Fringe add_T_1(Fringe current){
  const int64_t piece = make_piece(14, 4, 0);
  return add_some_T(current, piece, 3, 0);
}

Fringe add_T_2(Fringe current){
  const int64_t piece = make_piece(2, 3, 2);
  return add_some_T(current, piece, 1, 1);
}

Fringe add_T_3(Fringe current){
  const int64_t piece = make_piece(2, 7, 0);
  return add_some_T(current, piece, 1, 0);
}

Fringe add_T_4(Fringe current){
  const int64_t piece = make_piece(2, 6, 2);
  return add_some_T(current, piece, 1, 0);
}

std::vector<Fringe> add_all_T(Fringe current){
  std::vector<Fringe> ret;
  Fringe t1 = add_T_1(current);
  if (t1) { ret.push_back(t1); }
  Fringe t2 = add_T_2(current);
  if (t2) { ret.push_back(t2); }
  Fringe t3 = add_T_3(current);
  if (t3) { ret.push_back(t3); }
  Fringe t4 = add_T_4(current);
  if (t4) { ret.push_back(t4); }
  return(ret);
}
