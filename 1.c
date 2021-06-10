#ifdef __cplusplus
#define DOTDOTDOT ...
#else
#define DOTDOTDOT
#endif

#include <stdio.h>

void f1(long a)
{
	printf("%lx", a);
}

int main()
{
	void *p1 = (void*)f1;
	typedef void (*T)(DOTDOTDOT);
	T p2 = (T)p1;
	p2((long)0);
}
