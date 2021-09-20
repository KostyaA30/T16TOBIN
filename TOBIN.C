/* Melnikov Artem, 09-2, MA2, 10.09.2021 */
#include <stdio.h>
#include "TOBIN.H"

void ToBin( ulong X )
{
  INT i, element, f = 0;
  
  for (i = 64; i >= 0; i--)
  {
    element = n & (1 << i);
    if (flag == 1)
    {
      printf("%i", element);
      continue;
    }
    if (element == 1)
      flag = 1;
    printf("&i", element);
  }
}
