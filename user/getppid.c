#include "user.h"
#include "../kernel/types.h"
#include "../kernel/syscall.h"

int main() {
    printf("PID Actual: %d\n", getpid());
    printf("PID Padre: %d\n", getppid());
    exit(0);
}