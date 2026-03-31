#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>
#include <stdio.h> // allowed for snprintf formatting

int main() {
    char buffer[512];
    DIR *dir = opendir(".");
    if (dir == NULL) return 1;

    struct dirent *entry;
    struct stat fileStat;

    const char *h1 = "Filename                       Size (bytes)\n";
    const char *h2 = "------------------------------ ----------\n";
    write(1, h1, strlen(h1));
    write(1, h2, strlen(h2));

    while ((entry = readdir(dir)) != NULL) {
        if (stat(entry->d_name, &fileStat) == 0) {
            // format text into buffer, then write raw bytes to stdout
            int len = snprintf(buffer, sizeof(buffer), "%-30s %10ld\n", 
                               entry->d_name, fileStat.st_size);
            write(1, buffer, len);
        }
    }

    closedir(dir);
    return 0;
}
