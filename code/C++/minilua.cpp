#include <stdio.h>
#include <cstdio>
#include <cstdlib>

int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        printf("Usage: %s [minilua program]\n", argv[0]);
        exit(1);
    }

    return 0;
}
