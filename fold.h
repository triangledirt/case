#ifndef fold_h
#define fold_h

#include "bit.h"
#include "object.h"

void fold_learn(case_object_t objs[], long objs_size, long type);
case_bit_t fold_classify(case_object_t obj, long type);

#endif