#include<stdlib.h>
#include<pthread.h>
#include<stdio.h>
void* func(void* thread)
{
    printf("thread %d\n",(int)thread);
	pthread_exit(NULL);
}
int main()
{
	int cnt;
	pthread_t arr[100];
	for (int i=0;i<100;i++)
	{
		printf("creating thread %d\n", i);
		cnt = pthread_create(&arr[i], NULL, func, (void*)i);
		if (cnt>0)
		{
			printf("error in thread %d", i);
			exit(-1);
		}
	}
	pthread_exit(NULL);
	return 0;
}
