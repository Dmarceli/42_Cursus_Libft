# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 19:15:37 by dmarceli          #+#    #+#              #
#    Updated: 2021/10/25 20:14:24 by dmarceli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strlcat.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strrev.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c\

SRCS_B = 
OBJS = ${SRCS:.c=.o}
INCS = libft.h
NAME = libft.a

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}
${BONUS}: ${OBJS_B}
	ar rcs ${NAME} ${OBJS_B}

all: ${NAME}

bonus: ${BONUS}

.c.o:
	gcc -Wall -Wextra -Werror -I ${INCS} -c $< -o ${<:c=o}
clean:
	rm -rf ${OBJS} ${OBJS_B}
fclean: clean
	rm -f ${NAME} ${BONUS}
re: fclean all

.PHONY: all bonus clean flean re .c.o