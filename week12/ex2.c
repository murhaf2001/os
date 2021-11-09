#include <linux/input.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

int main(){
    int input = open("/dev/input/by-path/platform-i8042-serio-0-event-kbd", O_RDONLY);
    while(1){
        struct input_event ie;
        if (read(input, (void*) &ie, sizeof(struct input_event)) < sizeof(struct input_event)) 
            continue;
        if(ie.type == 1)
            printf("PRESSED %x (%d)\n",ie.code,ie.code);
        if(ie.type == 0)
            printf("RELEASED %x (%d)\n",ie.type,ie.code);
    }
    return 0;
}