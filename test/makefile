all: main.exe run

main.exe: main.c ../binary-tree.c
	@clang -Wall -o main.exe main.c ../binary-tree.c

run: main.exe
	@./main.exe
