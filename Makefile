# Raylib
RAYLIB_TARGET = linux_amd64
RAYLIB_TAG = 5.0
RAYLIB = raylib-$(RAYLIB_TAG)_$(RAYLIB_TARGET)
RAYLIB_SRC = https://github.com/raysan5/raylib/releases/download/$(RAYLIB_TAG)/$(RAYLIB).tar.gz

NUKLEAR_TAG = 4.12.0
NUKLEAR_SRC = https://github.com/Immediate-Mode-UI/Nuklear/raw/$(NUKLEAR_TAG)/nuklear.h


CC = clang
CFLAGS = -Wall -Wextra -pedantic -I$(RAYLIB)/include -Iextern
LDFLAGS = -L$(RAYLIB)/lib -lraylib -lm -lGL

.PHONY: clean purge

all: build

build: main.c
	$(CC) $(CFLAGS) main.c -o calc $(LDFLAGS)

deps:
	mkdir -p cache
	wget -q -P cache $(RAYLIB_SRC) $(NUKLEAR_SRC)
	tar -xf cache/$(RAYLIB).tar.gz
	mkdir nuklear
	cp cache/nuklear.h nuklear

run:
	./calc

clean:
	rm -f calc
	rm -rf cache

purge: clean
	rm -rf raylib-* nuklear
