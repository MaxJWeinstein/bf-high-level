#ifndef ARGV_PARSE_H
#define ARGV_PARSE_H

#include <stdio.h>
#include <stdlib.h>


// Parse command line, open source and output files
void parse_args(int argc, char **argv, FILE **sourcep, FILE **outputp);


#endif