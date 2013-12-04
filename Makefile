CC?=gcc
CFLAGS?=-O2 -g -pipe -Wall -Wp,-D_FORTIFY_SOURCE=2 -fexceptions -fstack-protector-strong -pedantic
LIBS=-ladmesh

snapz: snapz.c
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

clean: 
	rm -f snapz

.PHONY: clean
