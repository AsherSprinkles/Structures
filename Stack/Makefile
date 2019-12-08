CFLAGS=-g -Wall -Wextra -O3
OBJS=main.o Stack.o

main : $(OBJS)
	cc -o $@ $^

main.o :
Stack.o : Stack.h .Stack.h

.PHONY: clean
clean:
	rm *.o main