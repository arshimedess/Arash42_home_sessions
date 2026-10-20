# Libft checklist

Change `[ ]` to `[x]` when a function is TESTED.

🟡 written   ✅ tested

## Part 1: Libc functions (23)
					w t1 t2 RVW
- [ ] ft_isalpha    🟡✅
- [ ] ft_isdigit    🟡✅
- [ ] ft_isalnum    🟡✅
- [ ] ft_isascii    🟡✅
- [ ] ft_isprint    🟡✅
- [ ] ft_strlen     🟡✅
- [ ] ft_memset     🟡✅
- [ ] ft_bzero      🟡✅
- [ ] ft_memcpy     🟡X
- [ ] ft_memmove    🟡X
- [ ] ft_strlcpy    🟡✅
- [ ] ft_strlcat    🟡✅
- [ ] ft_toupper    🟡✅
- [ ] ft_tolower    🟡✅
- [ ] ft_strchr     🟡✅
- [ ] ft_strrchr    🟡X ✅ paco strrchr still fails the first one but says ok
- [ ] ft_strncmp    🟡X ✅ this test "test\200" vs "test", n = 6	128 - 0, which is oct nmr ?idk
- [ ] ft_memchr     🟡✅
- [ ] ft_memcmp     🟡✅
- [ ] ft_strnstr    🟡X
- [ ] ft_atoi       🟡✅

-------------------------------------
Learning malloc & free
-------------------------------------

- [ ] ft_calloc     🟡✅
- [ ] ft_strdup     🟡✅

## Part 2: Additional functions (11)

- [ ] ft_substr		🟡✅
- [ ] ft_strjoin	🟡✅
- [ ] ft_strtrim	🟡✅
- [ ] ft_split		🟡✅
- [ ] ft_itoa		🟡X
- [ ] ft_strmapi	🟡✅
- [ ] ft_striteri	🟡✅
- [ ] ft_putchar_fd	🟡✅
- [ ] ft_putstr_fd	🟡✅
- [ ] ft_putendl_fd	🟡✅
- [ ] ft_putnbr_fd	🟡✅

## Part 3: Linked list (9)

- [ ] ft_lstnew			🟡✅
- [ ] ft_lstadd_front	🟡✅
- [ ] ft_lstsize		🟡✅
- [ ] ft_lstlast		🟡✅
- [ ] ft_lstadd_back	🟡✅
- [ ] ft_lstdelone		🟡✅
- [ ] ft_lstclear		🟡✅
- [ ] ft_lstiter		🟡✅
- [ ] ft_lstmap			🟡✅

## Part 4: test everything with francinette!
## part 5: show it to someone! do an informal evaluation!
