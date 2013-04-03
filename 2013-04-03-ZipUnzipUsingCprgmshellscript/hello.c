#include <stdlib.h>
#include <stdio.h>
//int system (char *s);
int file_exists(const char * filename);
int main(){
	int rc;
	if(file_exists("./test.txt"))
		rc = system ("./zipfile.sh");
	else
		rc = system ("./unzipfile.sh");
	return 0;
}

int file_exists(const char * filename)
{
	FILE * file;
    if (file = fopen(filename, "r"))
    {
        fclose(file);
        return 1;
    }
    return 0;
}