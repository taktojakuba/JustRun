all: JustRun

JustRun: main.cpp
	g++ -std=c++17 -O2 -march=native -flto main.cpp -o jr
install: JustRun
	cp jr /usr/local/bin/jr
	chmod +x /usr/local/bin/jr

uninstall:
	rm -f /usr/local/bin/jr

clean:
	rm -f jr

rebuild: clean all

.PHONY: all clean rebuild install uninstall

