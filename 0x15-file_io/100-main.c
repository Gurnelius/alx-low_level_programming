#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include <errno.h>
#include "elf_header.h"



int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    const char *filename = argv[1];
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error(strerror(errno));
    }

    Elf64_Ehdr header;
    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        print_error("Error reading ELF header");
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        print_error("Not an ELF file");
    }

    display_elf_header_info(&header);

    close(fd);
    return 0;
}

