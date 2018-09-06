IDIR =../include
CC=g++
CFLAGS=-g

ODIR=obj
LDIR =../lib

_DEPS = md5.h strings.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o md5.o strings.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hashutil: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
	rm -f hashutil