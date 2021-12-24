# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zzirh <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 22:25:01 by zzirh             #+#    #+#              #
#    Updated: 2021/11/25 01:43:29 by zzirh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Wextra -Werror

AR = ar crs

RM = rm -rf

FILES = ft_atoi ft_substr ft_strjoin ft_strtrim ft_split ft_putnbr_fd ft_strmapi ft_itoa ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd \
       ft_bzero ft_strchr ft_strncmp ft_memcmp ft_memchr ft_strnstr ft_strdup ft_calloc \
       ft_strrchr ft_tolower ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_memcpy ft_memmove ft_memset ft_strlcat ft_strlcpy ft_strlen ft_toupper

BONUS = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

SRC = $(FILES:=.c)

OBJ = $(FILES:=.o)

NAME = libft.a

SRC2 = $(BONUS:=.c)

OBJ2 = $(BONUS:=.o)

.PHONY:all clean fclean re

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

bonus : $(OBJ2)
	$(AR) $(NAME) $(OBJ2)

clean:
	$(RM) $(OBJ) $(OBJ2)

fclean : clean 
	$(RM) $(NAME)

re : fclean all
