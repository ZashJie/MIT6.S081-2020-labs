#include "kernel/param.h"
#include "kernel/types.h"
#include "kernel/stat.h"
#include "kernel/riscv.h"
#include "kernel/fcntl.h"
#include "kernel/spinlock.h"
#include "kernel/sleeplock.h"
#include "kernel/fs.h"
#include "kernel/file.h"
#include "user/user.h"

int main(int argc, char* argv[])
{
    char* target = "/123";
    char* path = "/321";
    symlink(target, path);
    printf("ok\n");
    exit(0);
}