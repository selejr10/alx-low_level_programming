#include <stdio.h>
#include <stdlib.h>
#include "elf_header.h"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
		exit(1);
	}

	char *elf_filename = argv[1];

	if (!analyze_elf_header(elf_filename))
	{
		fprintf(stderr, "Error analyzing ELF header.\n");
		exit(1);
	}

	return (0);
}
