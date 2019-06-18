// External libraries
#include <stdio.h>
#include <stdlib.h>

// Local libraries
#include "models/rsa_key.h"
#include "utilities/math_functions.c"

// The initial offset  of p
#define INITIAL_P 2
// The initial offset of q
#define INITIAL_Q 3

/**
 * Generates the key that satisfies the constraints of RSA 1.5
 */
struct Key* generate_key(int e)
{
      // Setting p as some default value
      int p = next_prime(INITIAL_P);

      // Setting q as some default value
      int q = next_prime(INITIAL_Q);

      // Finding the next prime number until it satisfies the following conditions
      while(p == q || common_divisor(p-1, e) || common_divisor(q-1, e)) {
            p = next_prime(p);
            q = next_prime(q);
      }

      int n = p * q;

      int d = 2;
      // Finding D such that (de - 1) is divisible by both p and q
      while( ((d * e) - 1)%p != 0 || ((d * e) - 1)%p != 0 ) {
            d++;
      }

      // Creating a key and initializing it
      struct Key* key = (struct Key*)malloc(sizeof(struct Key));
      key->p = p;
      key->q = q;
      key->e = e;
      key->n = n;
      key->d = d;

      return key;
}

/**
 * A simple function to display the values of the given RSA Key
 */
void display(struct Key *key)
{
      printf("\nThe key is p = %d, q = %d, e = %d, n = %d and d = %d", key->p, key->q, key->e, key->n, key->d);
}