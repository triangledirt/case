#include "op.h"

static case_bit_t value[16][2][2] = {
  { { 0, 0 }, { 0, 0 } },
  { { 0, 0 }, { 0, 1 } },
  { { 0, 0 }, { 1, 0 } },
  { { 0, 0 }, { 1, 1 } },
  { { 0, 1 }, { 0, 0 } },
  { { 0, 1 }, { 0, 1 } },
  { { 0, 1 }, { 1, 0 } },
  { { 0, 1 }, { 1, 1 } },
  { { 1, 0 }, { 0, 0 } },
  { { 1, 0 }, { 0, 1 } },
  { { 1, 0 }, { 1, 0 } },
  { { 1, 0 }, { 1, 1 } },
  { { 1, 1 }, { 0, 0 } },
  { { 1, 1 }, { 0, 1 } },
  { { 1, 1 }, { 1, 0 } },
  { { 1, 1 }, { 1, 1 } }
};

case_bit_t op_calc(case_bit_t op, case_bit_t bit1, case_bit_t bit2)
{
  return value[op][bit1][bit2];
}

void op_randomize(case_bit_t *op)
{
  *op = random() % 16;
}
