CPP=clang
CPPFLAGS=-g -Wall

all: pass_arg

%: %.c
	$(CPP) $(CPPFLAGS) -o $@ $^