CFLAGS=-O3 -Wall -Wextra
STACKPATH=./Libs/Stack
TREEPATH=./Libs/Tree
VPATH=$(STACKPATH) $(TREEPATH)
OBJS=main.o $(STACKPATH)/Stack.o $(TREEPATH)/Tree.o

main: $(OBJS)

main.o: main.c

$(STACKPATH)/Stack.o: Stack.c

$(TREEPATH)/Tree.o: Tree.c

.PHONY: clean

clean:
	-(cd Libs/Stack; rm *.o)
	-(cd Libs/Tree; rm *.o)
	-rm *.o main
