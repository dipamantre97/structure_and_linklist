CC=gcc
CFLAGS=-c

final:main.o insertion_sort.o
	$(CC) $^ -o $@
%.o:%.c
	$(CC) $(CFLAGS) $<
clean:
	rm *.o
