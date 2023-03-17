#!/bin/bash
gcc -Wall -Wextra -pedantic -std=gnu89 -o a.out -xc - <<EOF && ./a.out && rm a.out
#include <stdio.h>

int main(void)
{
    puts("\"Programming is like building a multilingual puzzle");
    return (0);
}
EOF

