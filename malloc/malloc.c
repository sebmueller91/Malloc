#include <stdio.h>

#define MEMORY 10000

typedef struct mblock	{
	struct mblock *next;	
	size_t size;
	char *mem_area;//	char mem_area[];	
} mblock;

static char memory[MEMORY];
static mblock *head = NULL	;

void *malloc(size_t size) 
{
	// First call
	/*if (head == NULL)
	{
		head = (mblock *) memory;
		head->next = NULL;
		head->size = sizeof(memory) - sizeof(mblock);
		head->mem_area = (char *) head + sizeof(mblock);

		return (void *) memory;
	}

	// Walk through list
	mblock *cur_element = head;
	while (cur_clement != nu*/

	if (size_t == 0) 
	{
		return NULL;
	}

	// First call
	if (head == NULL)
	{
		head = (mblock *) memory;
		head->next = NULL;
		head->size = sizeof(memory) - sizeof(mblock);
		head->mem_area = (char *) head + sizeof(mblock);
	}

	// Walk through list
	if (head->next == NULL) 
	{
		mblock *old_head = head;

		return old_head->mem_area;
	}

	errno = 1; // TODO	
	return NULL;
}

int main(int argc, char *argv[]) 
{
    printf("Hello world\n");
}
