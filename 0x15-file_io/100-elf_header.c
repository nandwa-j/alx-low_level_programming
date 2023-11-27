#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 27
/**
 * print_magic - prints magic number
 * @ptr: pointer
 */

void print_magic(char *ptr)
{
int bytes;
printf(" Magic:");
for (bytes = 0; bytes < 16; bytes++)
printf(" %#02x", (unsigned char)ptr[bytes]);
printf("\n");
}
/**
 * check_sys - check the version system.
 * @ptr: magic.
 * Return: no return.
 */
void check_sys(char *ptr)
{
char sys = ptr[4] + '0';
if (sys == '0')
{
fprintf(stderr, "Error: Invalid ELF version.\n");
exit(98);
}
printf("ELF Header:\n");
print_magic(ptr);
if (sys == '1')
printf(" Class: ELF32\n");
else if (sys == '2')
printf(" Class: ELF64\n");
}

/**
 * check_elf - check if it is an elf file.
 * @ptr: magic.
 * Return: 1 if it is an elf file. 0 if not.
 */
int check_elf(char *ptr)
{
return (ptr[0] == 0x7f && ptr[1] == 'E' && ptr[2] == 'L' && ptr[3] == 'F');
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
char ptr[BUF_SIZE];
if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
exit(98);
}
fd = open(argv[1], O_RDONLY);
if (fd < 0)
{
perror("Error opening file");
exit(98);
}
lseek(fd, 0, SEEK_SET);
ret_read = read(fd, ptr, BUF_SIZE);
if (ret_read == -1)
{
perror("Error reading file");
exit(98);
}
if (!check_elf(ptr))
{
fprintf(stderr, "Error: Not an ELF file.\n");
exit(98);
}
check_sys(ptr);
close(fd);
return (0);
}

