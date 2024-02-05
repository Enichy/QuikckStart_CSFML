##
## first example, 2023
## CSFML_DOC
## File description:
## Makefile
##

SRCS	=	first_window.c

OBJS	=	$(SRCS:.c=.o)

EXEC	=	first_window

CFLAGS	=	-Wall -Wextra -I./include 

GRAPHICFLAGS	=	-lcsfml-graphics \
					-lcsfml-window \
					-lcsfml-system \
					-lcsfml-audio \
					-lcsfml-network

all:	$(EXEC)

$(EXEC):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXEC) $(GRAPHICFLAGS)

clean:
	$(RM) $(OBJS) $(EXEC)
