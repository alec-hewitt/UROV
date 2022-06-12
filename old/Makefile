CC=gcc

SRCDIR=src
IDIR=include
ODIR=obj
LDIR=lib

CFLAGS=-I $(IDIR)

_DEPS = UROV.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = UROV.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SRCDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

UROV: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
