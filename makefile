CPP=clang
CPPFLAGS=-g -Wall

all: bufferoverrun

%: %.c
	$(CPP) $(CPPFLAGS) -o $@ $^