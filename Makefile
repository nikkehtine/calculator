## DEPENDENCIES
# Raylib
RAYLIB_TARGET = linux_amd64
RAYLIB_TAG = 5.0
RAYLIB = raylib-$(RAYLIB_TAG)_$(RAYLIB_TARGET)
RAYLIB_SRC = https://github.com/raysan5/raylib/releases/download/$(RAYLIB_TAG)/$(RAYLIB).tar.gz
# Raygui
RAYGUI_TAG = 4.0
RAYGUI_SRC = https://github.com/raysan5/raygui/raw/$(RAYGUI_TAG)/src/raygui.h

## COMPILER OPTIONS
CC = clang
CFLAGS = -Wall -Wextra -pedantic -I$(RAYLIB)/lib
LDFLAGS = -L$(RAYLIB)/include -lraylib -lm -lGL

.PHONY: clean purge

all: build

build: main.c
	$(CC) $(CFLAGS) main.c -o calc $(LDFLAGS)

deps:
	mkdir -p cache
	wget -q -P cache $(RAYLIB_SRC) $(RAYGUI_SRC)
	tar -xf cache/$(RAYLIB).tar.gz
	mkdir raygui
	cp cache/raygui.h raygui

run:
	./calc

clean:
	rm -f calc
	rm -rf cache

purge: clean
	rm -rf raylib-* raygui
