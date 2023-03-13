#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar irc liball.a *.o
ranlib liball.a
