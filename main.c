#include "editor.h"

#define makebuffer(size) calloc(size, 1)

int main(int argc, char** argv) {

	FILE* f = fopen("test.txt", "r");

	/*
	vector* vecs = malloc(sizeof(vector) * 10);
	
	vector line = vector_create(32);

	for (int i = 0, c = 0; (c = fgetc(f)) && c > 0; i++) {
		putc(c, stdout);

		if (i >= line.size)
		{ 
			line.data = realloc(line.data, line.size * 2); 
			line.size *= 2; 
		}

		*(line.data + i) = c;
	}*/

	/*vector* vecs = malloc(sizeof(vector) * 10);

	vector line = vector_create(32);
	
	for (int i = 0, c = 0, vc = 0; (c = fgetc(f)) && c > 0; i++) {
		
		putc(c, stdout);

		if (i >= line.size)
		{
			line.data = realloc(line.data, line.size * 2);
			line.size *= 2;
		}

		*(line.data + i) = c;

		if (c == '\n') {
			if (vc >= (sizeof(vecs) / sizeof(vector))) {
				vecs = realloc(vecs, sizeof(vecs) * 2);
			}
		}
	
	}*/

	unsigned int linesize = 1;
	char* line = calloc(linesize, 1), **lines = calloc(10, sizeof(char*));
	

	for (int rt = 0, c = 0, lc = 0, j = 0; (c = fgetc(f)) && c > 0; j++) {
		putc(c, stdout);
		if (rt >= linesize) {
			char* tl = strncpy(calloc((linesize << 1) + 1, 1), line, rt);
			free(line);
			line = tl;
			linesize <<= 1;
		}

		line[rt] = c;
			
#if 0
		if (c == '\n' || !j) {
			/*lines[lc] = strncpy(calloc(linesize, 1), line, linesize);
			lines[lc++][linesize] = '\0';
			free(line);
			linesize = 1;
			line = calloc(linesize, 1);*/
			
			/*lines[lc] = strncpy(calloc(strlen(line) + 1, 1), line, strlen(line) - 1);
			//lines[lc++][strlen(lines[lc]) - 1] = '\0';
			
			//lines[lc] = strcpy(calloc(strlen(line) + 1, 1), line);
			lines[lc][strlen(lines[lc])] = '\0';
			lc++;
			free(line);
			linesize = 1;
			line = malloc(linesize, 1);*/
			
			lines[lc] = line;

			linesize = 1;
			line = calloc(linesize, 1);

			rt = 0;
		}

#endif

		if (c == '\n' || !j) {

		}
	}

	line;
	*line;
	
	//puts(lines[1]);

	fcloseall();

 	getchar(); return 0;
}