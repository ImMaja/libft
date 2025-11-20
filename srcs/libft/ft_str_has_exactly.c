#include "../../libft.h"

/**
 * @brief Check is a string length is exactly len caracteres
 * without retrieving exact length
 * @param s The complete string to check
 * @param len The requested length
 * @return true if string is exactly len length
 * false otherwise
 */
bool	ft_str_has_exactly(const char *s, const size_t len) {
	size_t	n = ft_strnlen(s, len + 1);

	return (len == n);
}
