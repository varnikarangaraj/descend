#include <stdio.h>
void main ()
{
 int num[]={31,14,15,7,2};
int i, j, a;
for (i = 0; i < 4; ++i)
{
for (j = i+1; j<4;++j)
 {
if (num[i]<num[j])
 {
 a = num[i];
num[i] = num[j];
num[j] = a;
}
}
}
printf("The numbers arranged in descending order");
 for (i = 0; i < n; ++i)
 {
printf("%d\n", num[i]);
}
}
