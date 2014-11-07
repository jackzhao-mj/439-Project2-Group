/*#include <debug.h>
#include <stddef.h>
#include <random.h>
#include <stdio.h>
#include <string.h>*/

#include <debug.h>
#include <list.h>
#include <stdint.h>
#include "kernel/hash.h"


struct page // initialize?????
{
	void *VA; //where address is in virtual memory
	//struct hash_elem hash_elem;  //used to put in hash element
	int dirty;
	int access;
	int in_frame_table;
	struct hash_elem page_elem;
};

void init_page_table (void);
void insert_page (struct page *p);

bool
hash_page_less (const struct hash_elem *h1, const struct hash_elem *h2,
           void *aux);

unsigned page_hash (const struct hash_elem *p_elem, void *aux);
 