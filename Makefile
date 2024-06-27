# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/25 10:48:20 by rchavez           #+#    #+#              #
#    Updated: 2024/06/27 09:48:27 by rchavez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = \
	Libft/ft_isalpha.c Libft/ft_isdigit.c Libft/ft_isalnum.c\
	Libft/ft_isascii.c Libft/ft_isprint.c Libft/ft_strlen.c Libft/ft_memset.c\
	Libft/ft_bzero.c Libft/ft_memcpy.c Libft/ft_memmove.c Libft/ft_strlcpy.c\
	Libft/ft_strlcat.c Libft/ft_toupper.c Libft/ft_tolower.c Libft/ft_strchr.c\
	Libft/ft_strrchr.c Libft/ft_strncmp.c Libft/ft_memchr.c Libft/ft_memcmp.c\
	Libft/ft_strnstr.c Libft/ft_atoi.c Libft/ft_calloc.c Libft/ft_strdup.c\
	Libft/ft_substr.c Libft/ft_strjoin.c Libft/ft_strtrim.c Libft/ft_split.c\
	Libft/ft_itoa.c Libft/ft_strmapi.c Libft/ft_striteri.c\
	Libft/ft_putchar_fd.c Libft/ft_putstr_fd.c Libft/ft_putendl_fd.c\
	Libft/ft_putnbr_fd.c

BLIBFT = \
	Libft/ft_lstnew_bonus.c Libft/ft_lstadd_front_bonus.c\
	Libft/ft_lstsize_bonus.c Libft/ft_lstlast_bonus.c\
	Libft/ft_lstadd_back_bonus.c Libft/ft_lstdelone_bonus.c\
	Libft/ft_lstclear_bonus.c Libft/ft_lstiter_bonus.c\
	Libft/ft_lstmap_bonus.c

MCT = \
	ft_malloc/ft_malloc_bad.c ft_malloc/ft_malloc.c\
	ft_malloc/globals.c ft_malloc/list.c

GNL = \
	get_next_line/get_next_line.c get_next_line/get_next_line_utils.c

BGNL = \
	get_next_line/get_next_line_bonus.c get_next_line/get_next_line_utils_bonus.c

OBJ = OBJ/

OL = $(OBJ)Libft

OM = $(OBJ)ft_malloc

OG = $(OBJ)get_next_line

OFILES = $(LIBFT:%.c=$(OBJ)%.o) $(MCT:%.c=$(OBJ)%.o) $(GNL:%.c=$(OBJ)%.o)

BOFILES = $(LIBFT:%.c=$(OBJ)%.o) $(BLIBFT:%.c=$(OBJ)%.o) $(MCT:%.c=$(OBJ)%.o) $(BGNL:%.c=$(OBJ)%.o)

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(OL) $(OM) $(OG) $(OFILES)
	rm -f $(NAME)
	ar rcs $(NAME) $(OFILES)

$(OBJ)%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

$(OBJ) :
	@if [ ! -d $(OBJ) ]; then\
		mkdir $(OBJ);\
	fi

$(OL) : $(OBJ)
	@if [ ! -d $(OL) ]; then\
		mkdir $(OL);\
	fi

$(OM) : $(OBJ)
	@if [ ! -d $(OM) ]; then\
		mkdir $(OM);\
	fi

$(OG) : $(OBJ)
	@if [ ! -d $(OG) ]; then\
		mkdir $(OG);\
	fi

bonus: $(OL) $(OM) $(OG) $(BOFILES)
	rm -f $(NAME)
	ar rcs $(NAME) $(BOFILES)

clean:
	rm -fr $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re bonus