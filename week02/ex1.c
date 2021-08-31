#include <stdio.h>
#include <float.h>
#include <limits.h>

int main()
{
	int x=INT_MAX;
	float f=FLT_MAX;
	double d=DBL_MAX;
	printf("int size: %lu, and its max value is: %d\n",sizeof(int),x);
        printf("int size: %lu, and its max value is: %f\n",sizeof(float),f);
        printf("int size: %lu, and its max value is: %lf\n",sizeof(double),d);
	return 0;
}
