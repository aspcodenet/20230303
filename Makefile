PROG=main.exe
CC=gcc
CFLAGS=-g -Wall -Werror
DEPS = func.h f2.h
OBJ = main.o func.o
 
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
 
$(PROG): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)