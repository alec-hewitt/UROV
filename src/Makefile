CC=gcc
CFLAGS=-I.

IDIR = 

DEPS = ../include/UROV.h ../include/GPIO.h
OBJ = UROV.o GPIO.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

UROV: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o *~ core main
