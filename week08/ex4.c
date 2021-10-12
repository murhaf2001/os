#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/resource.h>
#include<unistd.h>

int main()
{
    const size_t memory =  10485760;
    int n = 10;
    for(int i = 0;i < n;i++)
    {
        void* a = malloc(memory);
        memset(a, 0, sizeof(a));
        struct rusage rusage;
        getrusage(RUSAGE_SELF, &rusage);
        printf("%ld\n",rusage.ru_maxrss);
        sleep(1);
    }

    return 0;
}
