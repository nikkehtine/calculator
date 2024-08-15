CC = clang
CFLAGS = -Wall -Wextra -pedantic
LDFLAGS = -lraylib -lm -lGL
OUTDIR = out

all: build

build: main.c
	mkdir -p $(OUTDIR)
	$(CC) $(CFLAGS) main.c -o $(OUTDIR)/calc $(LDFLAGS)

clean:
	rm -f out
