/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amishra <amishra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 06:08:01 by amishra           #+#    #+#             */
/*   Updated: 2018/05/28 06:32:10 by amishra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 23

# include <fcntl.h>
# include <unistd.h>
# include "libft/libft.h"

int		get_next_line(int const fd, char **line);

#endif
