#ifndef RSA_KEY_H
#define RSA_KEY_H

/**
 * A basic structure to store the key for encryption.
 * Rules for a key in RSA 1.5
 *    - The public exponent should be a postive integer
 *    - p should be a prime number such that (p - 1) and e have no common divisor
 *    - q should be q prime numbersuch that (q - 1) and e have no common divisor
 *    - n must be the product of p and q (The 2 prime numbers)
 *    - d must be a positive integer such that de - 1 is divisible by both p-1 and q-1.
 */
struct Key 
{
      // The 2 prime numbers
      int p, q;
      // The public exponent
      int e;
      // The public modulus
      int n;
      // The private exponent
      int d;
};

// Generates the RSA 1.5 Key for the given exponent.
struct Key* generate_key(int);

// Displays the given RSA key
void display(struct Key*);

#endif