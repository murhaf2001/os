#include<stdio.h>
#include<pthread.h>

#define N 40

pthread_t producer_thread, consumer_thread;
int consumer, producer;
char s[N];
int pos;
int t;


void* Consume(void *x)
{
	while(1)
	{
		if(consumer)
			continue;

		if(pos == 0)
		{
			consumer = 1;
			producer = 0;
			continue;
		}
		printf("%c", s[pos]);
		pos--;
	}
	pthread_exit(NULL);
	return NULL;
}
void* Produce(void *x)
{
	while(1)
	{
		if(producer)
			continue;
		
		if(pos == 20)
		{
			consumer = 0;
			producer = 1;
			printf("Done production with time %d", t++);
			continue;
		}
		s[pos] = 'a' + pos;
		pos++;
	}

	pthread_exit(NULL);
	return NULL;
}


int main()
{
	consumer = 1;

	pthread_create(&producer_thread, NULL, Produce, NULL);
	pthread_create(&consumer_thread, NULL, Consume, NULL);

	while(1);
//it stopped at time 15432
	return 0;
}
