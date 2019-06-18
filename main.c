// External Libraries
#include <stdio.h>

// Local Libraries
#include "models/rsa_key.h"
#include "key_generator.c"

#define PUBLIC_EXPONENT_VALUE 65537

int main()
{
      struct Key *key =  generate_key(PUBLIC_EXPONENT_VALUE);
      display(key);

      printf("\n");

      return 0;
}