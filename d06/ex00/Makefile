# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/28 12:53:21 by mzhurba           #+#    #+#              #
#    Updated: 2019/12/11 11:37:49 by mzhurba          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)
OBJDIR = obj

OBJS = $(addprefix $(OBJDIR)/, $(OBJ))

CC = clang++
CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $@
	@echo "💾  [$(NAME) - ready] 💾"

$(OBJDIR)/%.o: %.cpp
	@/bin/mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) $< -o $@

clean:
	@/bin/rm -rf $(OBJDIR)

fclean: clean
	@/bin/rm -rf $(NAME)
	@echo "🗑  [$(NAME) - fclean] 🗑"