#include <sys/time.h>
#include <unistd.h>
#include <iostream>
using namespace std;
/*
 * timeval 结构体成员为秒和微秒
 * struct timeval { 
 * __kernel_time_t tv_sec; 
 *__kernel_suseconds_t tv_usec;
 * };
*/

int main()
{
	struct timeval start, ends;
	gettimeofday(&start, NULL);
	cout << start.tv_sec << "\t" << start.tv_usec/1000 << endl;
	sleep(3);
	gettimeofday(&ends, NULL);
	cout << ends.tv_sec << "\t" << ends.tv_usec/1000 << endl;
}
