
#define SOME_VAL1     ((MYINT)-1)
#define SOME_VAL2     (-2)
#define SOME_VAL3     -3

typedef (*my_fcn_ptr_t)(char *, int);
typedef (my_fcn_t)(char *, int);

void foo(void)
{
   uint crc = crc32_calc_full((const UINT8 *)"String", 6);

   crc = crc32_calc_full((const UINT8 *)&crc, sizeof(crc));

   a = b * (int)flt;
   a = b * ((int)flt);

   a = b * (int)flt;

   a = *(int)&b;
   a = (int)*pb;
}

