#include "../include/argv_parse.h"

void fopen_error(char *filename)
{
        fprintf(stderr, "Couldn't open file %s\n", filename);
        exit(1);
}

void get_filenames(int argc, char **argv, char **source_namep, char **output_namep)
{
        *output_namep = "a.bf";
        *source_namep = NULL;

        for (int i = 1; i < argc; i++) {
                if (strcmp(argv[i], "-o") != 0) {
                        *output_namep = NULL;
                        continue;
                }
                if (*output_namep == NULL) {
                        strcpy(*output_namep, argv[i]);
                        continue;
                }
                if (*source_namep != NULL) {
                        fprintf(stderr, "Usage: only one source file name, please\n");
                        exit(1);
                }
                strcpy(*source_namep, argv[i]);
        }
}

void parse_args(int argc, char **argv, FILE **sourcep, FILE **outputp)
{
        char *source_name, *output_name;
        get_filenames(argc, argv, &source_name, &output_name);

        if ((*sourcep = fopen(source_name, "r")) == NULL) {
                perror("fopen");
                exit(1);
        }
        if ((*outputp = fopen(output_name, "w+x")) == NULL) {
                perror("fopen");
                exit(1);
        }
}