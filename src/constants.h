#define WIDTH 13
#define CELL_BIT_WIDTH (3 * WIDTH)

#define MODULUS_BIT_WIDTH 2
#define MODULUS 4

// Number if bits to represent 0 to WIDTH-1
#define FIRST_BLANK_BIT_WIDTH 4

#define PADDING_BIT_WIDTH 4

#define TOTAL_BIT_WIDTH (CELL_BIT_WIDTH + MODULUS_BIT_WIDTH + FIRST_BLANK_BIT_WIDTH + PADDING_BIT_WIDTH)
#define DATA_BIT_WIDTH (CELL_BIT_WIDTH + MODULUS_BIT_WIDTH)
