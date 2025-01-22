CPP=clang
CPPFLAGS=-g -Wall

all: realloc

%: %.c
	$(CPP) $(CPPFLAGS) -o $@ $^
