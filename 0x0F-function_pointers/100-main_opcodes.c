#include <stdio.h>

int main()
{
	FILE *fp;
	char buffer[1000];
	size_t bytes_read;
	int i;

	fp = fopen("100-main_opcodes", "rb");
	bytes_read = fread(buffer, 1, sizeof(buffer), fp);
	fclose(fp);
	for (i = 0; i < bytes_read; i++)
	{
		/*%02x means print atleast 2 digits*/
		printf("%02x ", buffer[i]);
	}
	printf("\n");
	return 0;
}
