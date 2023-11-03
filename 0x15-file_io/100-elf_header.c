#include "main.h"
#include <unistd.h>
#include <elf.h>
#include <stdint.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>

#define ELF_MAGIC 0x7f454c46

/**
  * print_elf_header - prints agiven ELF header
  * @ehdr: pointer of type Elf64__Ehdr *
  */

void print_elf_header(const Elf64__Ehdr *ehdr)
{
	printf("Magic: 0x%08x\n", ehdr->e_ident[0]);
	printf("Class: %d\n", ehdr->e_ident[4]);
	printf("Data: %d\n", ehdr->e_ident[5]);
	printf("Version: %d\n", ehdr->e_version);
	printf("OS/ABI: %d\n", ehdr->e_ident[7]);
	printf("ABI Version: %d\n", ehdr->e_ident[8]);
	printf("Type: %d\n", ehdr->e_type);
	printf("Entry point address: 0x%016lx\n", ehdr->e_entry);
}

/**
 * main - program entry
 * @argc: number of given arguments
 * @argv: vector of argumets
 * Return: a value of type int
 */

int main(int argc, char *argv[])
{
	int fd;
	ssize_t bytes_read;
	Elf64__Ehdr ehdr;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error opening file: %s\n", argv[1]);
		exit(98);
	}

	bytes_read = read(fd, &ehdr, sizeof(ehdr));
	if (bytes_read != sizeof(ehdr))
	{
		dprintf(STDERR_FILENO, "Error reading ELF header\n");
		exit(98);
	}

	if (ehdr.e_ident[0] != ELF_MAGIC)
	{
		dprintf(STDERR_FILENO, "Not an ELF file\n");
		exit(98);
	}

	print_elf_header(&ehdr);

	close(fd);

	return (0);
}
