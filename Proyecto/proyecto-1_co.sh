#!/bin/bash

bison fin.y -d

flex fin.l

gcc fin.tab.c lex.yy.c -lfl -o a -lm
