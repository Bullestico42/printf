# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apiscopo <apiscopo@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 22:10:56 by apiscopo          #+#    #+#              #
#    Updated: 2024/10/17 02:04:28 by apiscopo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Fichiers source principaux
SRC =	ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbrbasehex.c ft_putstr.c \
		ft_putptr.c ft_putnbr_un.c

# Objets correspondants
OBJ = $(SRC:.c=.o)

# Commande pour créer la bibliothèque
AR = ar rcs

# Règle par défaut
all: $(NAME)

# Compilation de la bibliothèque normale
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# Compilation des fichiers .o à partir des .c
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJ)

# Nettoyage complet : fichiers objets + bibliothèque
fclean: clean
	rm -f $(NAME)

# Reconstruction complète
re: fclean all

# Evite les conflits si des fichiers ont le même nom que les règles
.PHONY: all clean fclean re
