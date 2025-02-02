# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/19 17:29:02 by bbenaali          #+#    #+#              #
#    Updated: 2025/01/31 09:10:16 by bbenaali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = Push-swap/ft_algoritem.c Push-swap/ft_atoi.c Push-swap/ft_indexing.c Push-swap/ft_push_a_b.c Push-swap/ft_ranking_three.c \
		Push-swap/ft_reverse_rotate_a_b.c Push-swap/ft_rotate_a_b.c Push-swap/ft_split.c Push-swap/ft_strlen.c Push-swap/ft_swap_a_b.c \
		Push-swap/ft_linked_list.c Push-swap/ft_parcing_part2.c Push-swap/ft_parcing.c Push-swap/ft_ranking_four.c Push-swap/ft_ranking_five.c \
		Push-swap/ft_clear_linked_list.c Push-swap/ft_check_sorting_nb.c Push-swap/ft_linked_list_part2.c Push-swap/ft_free_arr.c

SRCS_BONUS = checker_f/ft_algo_with_number.c checker_f/ft_atoi_bonus.c checker_f/ft_check_sorting_nb_bonus.c checker_f/ft_clear_linked_list_bonus.c \
	   		 checker_f/ft_indexing_bonus.c checker_f/ft_linked_list_bonus.c checker_f/ft_linked_list_for_in_put.c checker_f/ft_parcing_bonus.c \
	   		 checker_f/ft_parcing_part2_bonus.c checker_f/ft_push_a_b_bonus.c checker_f/ft_read_stdin.c checker_f/ft_reverse_rotate_a_b_bonus.c \
	   		 checker_f/ft_rotate_a_b_bonus.c checker_f/ft_split_bonus.c checker_f/ft_strcmp_bonus.c checker_f/ft_strlen_bonus.c checker_f/ft_swap_a_b_bonus.c \
	   		 checker_f/get_next_line.c checker_f/get_next_line_utils.c checker_f/ft_linked_list_part2_bonus.c checker_f/ft_free_arr_bonus.c

NAME = push_swap

BONUS = checker

CC = cc

RM = rm -f 

FLAGS = -Wall -Wextra -Werror

OBJC = ${SRCS:.c=.o}

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

all: ${NAME}
bonus:${BONUS}

${BONUS}: ${OBJS_BONUS}
	${CC} ${FLAGS} ${OBJS_BONUS} -o ${BONUS}

${NAME}: ${OBJC}
	${CC} ${FLAGS} ${OBJC} -o ${NAME}


Push-swap/%.o: Push-swap/%.c Push-swap/push_swap.h
	${CC} ${FLAGS} -c $< -o $@

checker_f/%.o: checker_f/%.c checker_f/checker.h
	${CC} ${FLAGS} -c $< -o $@

clean: 
	${RM} ${OBJC} ${OBJS_BONUS}
	
fclean: clean
	${RM} ${NAME} ${BONUS}

re: fclean all