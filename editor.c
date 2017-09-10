#include "editor.h"

vector vector_create(size_t size) {
	vector v;
	v.data = malloc(size);
	v.size = size;
	return v;
}

void append(vector* v, char c) {
	
	
	
	v->data[v->size - 1] = c;
}