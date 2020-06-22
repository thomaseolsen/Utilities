IDIR_CPP =cpp/include
CC=g++
CFLAGS=-g

ODIR_CPP=cpp/src/obj
LDIR_CPP =cpp/lib

_DEPS_CPP = md5.h sha1.h sha2.h sha224.h sha256.h sha384.h sha512.h strings.h
DEPS_CPP = $(patsubst %,$(IDIR_CPP)/%,$(_DEPS_CPP))

_OBJ_CPP = main.o md5.o sha1.o sha2.o sha224.o sha256.o sha384.o sha512.o strings.o
OBJ_CPP = $(patsubst %,$(ODIR_CPP)/%,$(_OBJ_CPP))

$(ODIR_CPP)/%.o: %.cpp $(DEPS_CPP)
	$(CC) -c -o $@ $< $(CFLAGS)

hashutil: $(OBJ_CPP)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR_CPP)/*.o *~ core $(INCDIR_CPP)/*~
	rm -f hashutil
