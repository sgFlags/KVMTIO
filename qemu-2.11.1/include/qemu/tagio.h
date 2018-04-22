#ifndef _TAGIO_H
#define _TAGIO_H

#include <stdint.h>
#include <sys/types.h>

#define FLAG_TAG    0x10000
#define FLAG_OK     0x1000

#define MAX_TAG_PRIO 12
#define MIN_TAG_PRIO 1

struct tag_data {
    uint8_t prio;
    pid_t vm_pid;
    pid_t proc_pid;
    uint32_t tag_flags;
};


#endif
