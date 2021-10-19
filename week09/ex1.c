#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct page
{
    int counter;
    int id;
};

int main(int argc, char *argv[]) 
{
    if(argc<=1) {
        printf("Please pass the imput as an argument.\n");
        return 0;
    }
    const int n = atoi(argv[1]);
    struct page memory[n];
    for(int i=0;i<n;i++)
        memory[i].counter = memory[i].id = -1;
    FILE *File;
    File = fopen("Lab 09 input.txt", "r");
    int temp,miss,hit;
    miss=hit=0;
    fscanf (File, "%d", &temp);
    while(!feof(File)){
        bool found = 0;
        int min_ind = 0;
        for(int i=0;i<n;i++){
            if(memory[min_ind].counter>memory[i].counter){
                min_ind = i;
            }
            memory[i].counter = memory[i].counter>>1;
            if(memory[i].id == temp){
                hit++;
                found = 1;
                memory[i].counter += (1<<7);
            }
        }
        if(!found){
            miss++;
            memory[min_ind].id = temp;
            memory[min_ind].counter = (1<<7);
        }
        fscanf (File, "%d", &temp);
    }
    double ratio = (double)hit/miss;
    printf("Hits: %d\nMisses: %d\n",hit,miss);
    printf("The ratio of Hit/Miss is %lf\n",ratio);
    return 0;
}
