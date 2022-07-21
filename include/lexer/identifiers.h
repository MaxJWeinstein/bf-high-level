#ifndef IDENTIFIERS_H
#define IDENTIFIERS_H

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool is_identifier_start(char c);

bool is_identifier_continue(char *id_so_far, char next);

bool is_nondigit(char c);

bool is_digit(char c);

#endif