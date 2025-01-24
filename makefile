CPP=gcc
CPPFLAGS=-g -Wall

all: tcp_client tcp_server

%: %.c
	$(CPP) $(CPPFLAGS) -o $@ $^
