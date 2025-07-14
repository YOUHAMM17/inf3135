# C'est le compilateur à utiliser
CC = gcc

# Options de compilation (tu peux ajouter -Wall -Wextra plus tard)
CFLAGS = 

# Cibles (targets)
all: hello main

hello: hello.c
	$(CC) $(CFLAGS) hello.c -o hello

main: main.c
	$(CC) $(CFLAGS) main.c -o main

# Nettoyer les exécutables
clean:
	rm -f hello main a.out
