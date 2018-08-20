#include "main.h"

void timer()
{
	time_t t;
	tm *timer;
	int s1, s2, sec = 5;
	time(&t);
	timer = localtime(&t);
	s1 = timer->tm_sec;
	while (!(sec == 0))
	{
		time(&t);
		timer = localtime(&t);
		s2 = timer->tm_sec;
		if (s1 != s2)
		{
			s1 = s2;
			sec--;
		}
		printf("\r%d", sec);
	}
}
