PKGS=sdl2
CFLAGS=-Wall -ggdb -std=c11 `pkg-config --cflags $(PKGS)`
LIBS=`pkg-config --libs $(PKGS)`

chess: main.c
	$(CC) $(CFLAGS) -o random main.c $(LIBS)
