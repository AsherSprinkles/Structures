#ifndef PSTACK_H
#define PSTACK_H

struct _pstacknode;
typedef struct _pstacknode* PSTACK;

PSTACK *make_pstack();
void ppush(void *, PSTACK *);
void *ppop(PSTACK *);
void delete_pstack(PSTACK *);
void print_pstack(PSTACK *);
int pstack_is_empty(PSTACK *);

#endif // PSTACK_H
