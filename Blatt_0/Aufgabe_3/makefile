CC = gcc
CFLAGS = -I.
DEPS = c_arrays.h c_array_main.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

c_array_main: c_array_main.o c_arrays.o
	$(CC) -o $@ $^ $(CFLAGS)
