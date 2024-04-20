# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: insoares <insoares@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 14:25:41 by insoares          #+#    #+#              #
#    Updated: 2024/04/20 18:41:47 by insoares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS            =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
					ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
					ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
					ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
					ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
					ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
					ft_strjoin.c
					
OBJS            = $(SRCS:.c=.o)

BONUS           =   
BONUS_OBJS      = $(BONUS:.c=.o)

CC              = cc
RM              = rm -f
CFLAGS          = -Wall -Wextra -Werror

NAME            = libft.a

all:            $(NAME)

$(NAME):        $(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:         clean
				$(RM) $(NAME)

re:             fclean $(NAME)

bonus:          $(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:         all clean fclean re bonus