##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

NAME		=	test

SANTA		=	santa

CC		= 	g++

RM		= 	rm -f

SRC		=   MyUnitTests.cpp \
			Object.cpp \
			Toy.cpp \
			Teddy.cpp \
			LittlePony.cpp \
			GiftPaper.cpp \
			Wrap.cpp \
			Box.cpp \
			Elf.cpp \
			ConveyorBelt.cpp \
			Table.cpp \

SSRC		=	Santa.cpp

OBJ		=	$(SRC:.cpp=.o)

SOBJ		=	$(SSRC:.cpp=.o)

LFLAGS	+= 	-W -Wall -Werror -Wextra

all:		$(NAME) $(SANTA)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

$(SANTA):	$(SOBJ)
		$(CC) $(SOBJ) -o $(SANTA)

clean:
		$(RM) $(OBJ) $(SOBJ)

fclean:		clean
		$(RM) $(NAME) $(SANTA)

re:		fclean all


.PHONY:		all clean fclean re bin