#include<stdio.h>
#include<limits.h>
#include<float.h>
 int main() {
    printf("range of char\nmax: %d \tmin: %d\n", CHAR_MIN,CHAR_MAX);
    printf("range of int \nmax: %d \tmin: %d\n", INT_MIN,INT_MAX);
    printf("range of long \nmax: %ld \tmin: %ld\n", LONG_MIN,LONG_MAX);
	printf("range of float \nmax: %.10e \tmin: %.10e\n", FLT_MIN,FLT_MAX);
	printf("range of long \nmax: %.10e \tmin: %.10e\n", DBL_MIN,DBL_MAX);
    return 0;
}