#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include <errno.h>
#include "elf_header.h"

/**
* print_error: print error message
*
* @message: error message
* Return: 98 - always
*/
void print_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	return (98);
}

/**
* display_elf_header_info: displays the information contained 
* in the ELF header at the start of an ELF file.
* @header: pointer to ELF header file
*
* Return: 0 - always
*/
void display_elf_header_info(Elf64_Ehdr *header)
{
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

    printf("  Class:                             %s\n",
           header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");

    printf("  Data:                              %s\n",
           header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
           header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" :
           "Unknown data encoding");

    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);

    printf("  OS/ABI:                            %s\n",
           header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
           header->e_ident[EI_OSABI] == ELFOSABI_HPUX ? "HP-UX" :
           header->e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "NetBSD" :
           header->e_ident[EI_OSABI] == ELFOSABI_LINUX ? "Linux" :
           header->e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "Sun Solaris" :
           header->e_ident[EI_OSABI] == ELFOSABI_IRIX ? "SGI Irix" :
           header->e_ident[EI_OSABI] == ELFOSABI_FREEBSD ? "FreeBSD" :
           header->e_ident[EI_OSABI] == ELFOSABI_TRU64 ? "Compaq TRU64 UNIX" :
           header->e_ident[EI_OSABI] == ELFOSABI_ARM ? "ARM architecture" :
           header->e_ident[EI_OSABI] == ELFOSABI_STANDALONE ? "Stand-alone (embedded) app" :
           "Unknown OS/ABI");

    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

    printf("  Type:                              %s\n",
           header->e_type == ET_NONE ? "NONE (Unknown type)" :
           header->e_type == ET_REL ? "REL (Relocatable file)" :
           header->e_type == ET_EXEC ? "EXEC (Executable file)" :
           header->e_type == ET_DYN ? "DYN (Shared object file)" :
           header->e_type == ET_CORE ? "CORE (Core file)" :
           "Unknown");

    printf("  Entry point address:               %#lx\n", header->e_entry);
	return (0);
}
