IDIR =../include
CC=g++
CFLAGS=-g

ODIR=obj
LDIR =../lib

_DEPS = md5.h sha1.h sha224.h sha256.h sha384.h sha512.h strings.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o md5.o sha1.o sha224.o sha256.o sha384.o sha512.o strings.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hashutil: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
	rm -f hashutil