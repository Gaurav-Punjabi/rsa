/**
 * Checks if the given number is a prime number or not.
 * Returns 1 if it is a prime number else 0.
 * 
 * @param n : The number that needs to be verified.
 */
int is_prime(int n)
{
      for(int i=2; i<=n/2; i++) 
      {
            if(n%i == 0)
                  return 0;
      }
      return 1;
}

/**
 * Returns the closest next prime number from the given offset.
 * 
 * @param offset : The number from which the next prime number is required.
 */
int next_prime(int offset)
{
      // Starting from offset + 1 since offset can be a prime number and we need to find the next
      // prime number.
      int current = offset + 1;

      // Looping until we don't reach a prime number
      while(!is_prime(current)) {
            current += 1;
      }

      return current;
}

/**
 * Returns the first common divisor between the 2 numbers, if present otherwise it reurns 0.
 * @param x : The first number
 * @param y : The second number
 */
int common_divisor(int x, int y)
{
      for(int i=2; i<=x && i<=y; i++)
      {
            // If both the numbers are divisible by i return i
            if(x%i == 0 && y%i == 0)
                  return i;
      }
      // This means that there is no other common divisor between x and y
      return 0;
}