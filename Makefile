CC = clang
CFLAGS = -Wall -Wextra -pedantic -Iextern

CFLAGS_linux = -lm -lraylib
CFLAGS_macos = $(shell pkg-config --libs --cflags raylib)
CFLAGS_windows = -I"C:/Program Files/Raylib/include" -L"C:/Program Files/Raylib/lib"

TARGET ?= linux
ifeq ($(TARGET), linux)
	CFLAGS += $(CFLAGS_linux)
else ifeq ($(TARGET), macos)
	CFLAGS += $(CFLAGS_macos)
else ifeq ($(TARGET), windows)
	CFLAGS += $(CFLAGS_windows)
endif


.PHONY: clean

all: build

build: main.c
	$(CC) $(CFLAGS) -o calc main.c

clean:
	rm -f calc
