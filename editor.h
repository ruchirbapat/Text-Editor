#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct vector_t {
	char* data;
	size_t size;
} vector;

vector vector_create(size_t size);

void append(vector* v, char c);