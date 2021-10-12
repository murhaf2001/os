#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    const size_t memory =  10485760;
    int n = 10;
    for(int i = 0;i < n;i++)
    {
        void* a = malloc(MemorySize);
        memset(a, 0, sizeof(a));
        sleep(1);
    }

    return 0;
}
