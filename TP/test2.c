#include <stdio.h>
#include <string.h>

void my_memcpy(void *dst, void *src, size_t n) {
char *d;
const char *s;
d = dst;
s = src;
int i=0;

for (i; i<n; i++)
*d++ = *s++;
return dst;

}
