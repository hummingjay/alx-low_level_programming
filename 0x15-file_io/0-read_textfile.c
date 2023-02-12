#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output
 *
 * @filename: file name to be read
 * @letters: number of letters to read and print
 * Return: if error 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, totwrite, totread;
	char *buffer;

	/*If no filename*/
	if (filename == 0)
		return (0);

	file = open(filename, O_RDONLY);

	/*if file can't be opened*/
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	/*if no space allocated*/
	if (buffer == NULL)
		return (0);
	/*Syntax: read(int fd, void *bf, size_t count);*/
	totread = read(file, buffer, letters);
	/*if file can't be read*/
	if (totread == -1)
		return (0);

	buffer[letters] = '\0';

	/*ssize_t write(int fd, const void *buf, size_t count);*/
	totwrite = write(file, buffer, letters);
	/*if write fails*/
	if (totwrite == -1)
		return (0);
	/*int close(int fd)*/
	close(file);
	free(buffer);
	return (totwrite);
}
