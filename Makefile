client: client.cpp
	gcc -g -O0 -o client client.cpp

server: server.cpp
	gcc -g -O0 -o server server.cpp



.PHONY : clean
clean:
	rm -rf client server