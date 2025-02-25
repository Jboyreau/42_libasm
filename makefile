SRC_DIR=./src/
NAME=libasm.a
OUTPUT=tester
OBJ=$(SRC_DIR)ft_strlen.o
CFLAGS=-f elf64 
CPPFLAGS=rcs

all : $(NAME)
$(NAME) : $(MLX) $(OBJ)
	ar $(CPPFLAGS) $(NAME) $(OBJ)
clean :	
	rm -f $(SRC_DIR)*.o
fclean : clean
	rm $(NAME)
	rm $(OUTPUT)
re : clean all

test : $(NAME)
	cc -o $(OUTPUT) test.c -L. -lasm
#############
## PATERNS ##
#############
#$@: Nom de la regle
#$<: Nom de la premiere dépendance
#$^: Nom de toute les dependances
%.o: %.asm
	nasm $(CFLAGS) $< -o $@
.PHONY: all clean fclean re test
