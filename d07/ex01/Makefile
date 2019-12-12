# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/28 12:53:21 by mzhurba           #+#    #+#              #
#    Updated: 2019/11/28 22:27:53 by mzhurba          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

SRC = iter.cpp

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