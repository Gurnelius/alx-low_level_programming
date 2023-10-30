#ifndef ELF_HEADER_H
#define ELF_HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

void print_error(const char *message);
void display_elf_header_info(Elf64_Ehdr *header);
int read_elf_header(const char *filename);

#endif  // ELF_HEADER_H

