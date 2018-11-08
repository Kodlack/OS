SOURCE = pendu.c
OUTPUT = jeu
LIB = -lm -lSDl -lSDL_ttf
LDLIBS = -lecpg -lpq
OPT = -Wall
.SUFFIXES: .c

all:$(OUTPUT)




clean:$(OUTPUT)
	rm $(OUTPUT)

$(OUTPUT):
	@clear
	@gcc -o jeu pendu.c
	@printf "\n"
	@printf "No errors, yeah !\n"

