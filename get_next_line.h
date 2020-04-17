/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdean <hdean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 12:09:13 by hdean             #+#    #+#             */
/*   Updated: 2019/07/02 19:43:08 by hdean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include "./libft/libft.h"

# define BUFF_SIZE 32

typedef struct	s_file
{
	char			*buf;
	int				fd;
	struct s_file	*next;
	struct s_file	*previous;
}				t_file;

int				get_next_line(const int fd, char **line);
t_file			*search_in_list(t_file **list, const int fd);
int				search_in_buf(char **buf, char **line);
void			add_in_list(t_file **list, const int fd, char *buf);
void			delete_element(const int fd, t_file **list);

#endif
