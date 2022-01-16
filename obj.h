#ifndef obj_h
#define obj_h

#include "bool.h"

typedef long case_obj_t;

void case_obj_clear(case_obj_t *obj);
void case_obj_randomize(case_obj_t *obj);
void case_obj_setfromstr(case_obj_t *obj, char *str);

#define case_obj_setattr(obj, indx, val) if (val) { *obj |= ((long) 1 << (indx)); } else { *obj &= ~((long) 1 << (indx)); }
#define case_obj_getattr(obj, indx) ((obj >> (indx)) & (long) 1)

void case_obj_mutate(case_obj_t *obj);
void case_obj_rotate(case_obj_t *obj, long inc);

#define case_obj_setclass(obj, val) if (val) { *obj |= ((long) 1); } else { *obj &= ~((long) 1); }
#define case_obj_getclass(obj) (obj & (long) 1)

double case_obj_comparet(case_obj_t obj1, case_obj_t obj2);
double case_obj_compareq(case_obj_t obj1, case_obj_t obj2);
double case_obj_comparex(case_obj_t obj1, case_obj_t obj2);

void case_obj_print(case_obj_t obj);

case_bool_t case_obj_hastype(case_obj_t obj, case_obj_t type);

void case_obj_setnum(case_obj_t *obj, long startbit, long bits, long num);
long case_obj_getnum(case_obj_t obj, long startbit, long bits);

double case_obj_getobliv(case_obj_t obj1, case_obj_t obj2);

#endif
