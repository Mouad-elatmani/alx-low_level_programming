#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_adre - prints address
 * @ptr: magic.
 * Return: no return.
 */
void print_adre(char *ptr)
{
	int i;
	int beg;
	char syste;

	printf("  Entry point address:               0x");

	syste = ptr[4] + '0';
	if (syste == '1')
	{
		beg = 26;
		printf("80");
		for (i = beg; i >= 22; i--)
		{
			if (ptr[i] > 0)
				printf("%x", ptr[i]);
			else if (ptr[i] < 0)
				printf("%x", 256 + ptr[i]);
		}
		if (ptr[7] == 6)
			printf("00");
	}

	if (syste == '2')
	{
		beg = 26;
		for (i = beg; i > 23; i--)
		{
			if (ptr[i] >= 0)
				printf("%02x", ptr[i]);

			else if (ptr[i] < 0)
				printf("%02x", 256 + ptr[i]);

		}
	}
	printf("\n");
}

/**
 * print_ty - prints type
 * @ptr: magic.
 * Return: no return.
 */
void print_ty(char *ptr)
{
	char type_c = ptr[16];

	if (ptr[5] == 1)
		type_c = ptr[16];
	else
		type_c = ptr[17];

	printf("  Type:                              ");
	if (type_c == 0)
		printf("NONE (No file type)\n");
	else if (type_c == 1)
		printf("REL (Relocatable file)\n");
	else if (type_c == 2)
		printf("EXEC (Executable file)\n");
	else if (type_c == 3)
		printf("DYN (Shared object file)\n");
	else if (type_c == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type_c);
}

/**
 * print_os - prints osabi
 * @ptr: magic.
 * Return: no return.
 */
void print_os(char *ptr)
{
	char os = ptr[7];

	printf("  OS/ABI:                            ");
	if (os == 0)
		printf("UNIX - System V\n");
	else if (os == 2)
		printf("UNIX - NetBSD\n");
	else if (os == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", os);

	printf("  ABI Version:                       %d\n", ptr[8]);
}


/**
 * print_version - prints version
 * @ptr: magic.
 * Return: no return.
 */
void print_ve(char *ptr)
{
	int version = ptr[6];

	printf("  Version:                           %d", version);

	if (version == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}
/**
 * print_data - prints data
 * @ptr: magic.
 * Return: no return.
 */
void print_data(char *ptr)
{
	char data = ptr[5];

	printf("  Data:                              2's complement");
	if (data == 1)
		printf(", little endian\n");

	if (data == 2)
		printf(", big endian\n");
}
/**
 * print_mag - prints magic info.
 * @ptr: magic.
 * Return: no return.
 */
void print_ma(char *ptr)
{
	int bytes;

	printf("  Magic:  ");
	for (bytes = 0; bytes < 16; bytes++)
		printf(" %02x", ptr[bytes]);
	printf("\n");

}

/**
 * check_system - check the version system.
 * @ptr: magic.
 * Return: no return.
 */
void check_system(char *ptr)
{
	char sys = ptr[4] + '0';

	if (sys == '0')
		exit(98);
	printf("ELF Header:\n");
	print_ma(ptr);
	if (sys == '1')
		printf("  Class:                             ELF32\n");
	if (sys == '2')
		printf("  Class:                             ELF64\n");
	print_data(ptr);
	print_ve(ptr);
	print_os(ptr);
	print_ty(ptr);
	print_adre(ptr);
}

/**
 * check_if - check if it is an elf file.
 * @ptr: magic.
 * Return: 1 if it is an elf file. 0 if not.
 */
int check_if(char *ptr)
{
	int addr = (int)ptr[0];
	char E = ptr[1];
	char L = ptr[2];
	char F = ptr[3];

	if (addr == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);
	return (0);
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd, ret_read;
	char ptr[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}
	lseek(fd, 0, SEEK_SET);
	ret_read = read(fd, ptr, 27);
	if (ret_read == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}
	if (!check_if(ptr))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}
	check_system(ptr);
	close(fd);
	return (0);
}