#include <stdio.h>

int main()
{
    FILE *fp;
    char buffer[1000];
    size_t bytes_read;

    fp = fopen("100-main_opcodes", "rb");
    bytes_read = fread(buffer, 1, sizeof(buffer), fp);
    fclose(fp);

    for (int i = 0; i < bytes_read; i++) {
        printf("%02x ", buffer[i]);
    }
    printf("\n");
    return 0;
}
