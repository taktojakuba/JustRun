PREFIX ?= /usr/local
BINDIR ?= $(PREFIX)/bin

all: jr

jr: main.cpp
	g++ -std=c++17 -O2 -march=native -flto main.cpp -o jr

install: jr
	install -Dm755 jr $(DESTDIR)$(BINDIR)/jr

uninstall:
	rm -f $(DESTDIR)$(BINDIR)/jr

clean:
	rm -f jr

rebuild: clean all

.PHONY: all clean rebuild install uninstall