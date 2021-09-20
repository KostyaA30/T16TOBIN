/* Melnikov Artem, 09-2, MA2, 10.09.2021 */
#include <stdio.h>
#include "TOBIN.H"

void main( void )
{
  ulong x;
  
  printf("X: ");
  scanf("llu", &x);
  
  ToBin(x);
  
  getchar();
  getchar();
}
