CC = gcc
CFLAGS = -I.
DEPS = Strings_main.h Strings_main.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

Strings_main: Strings_main.o strings_func.o
	$(CC) -o $@ $^ $(CFLAGS)