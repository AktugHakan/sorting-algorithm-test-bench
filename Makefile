INCLUDE_PATH = headers
CFLAGS = -Wall -Werror -I$(INCLUDE_PATH)
CC = gcc

program: src/sort_algorithm.c src/sort_base.c
	@echo "Derleme başladı..."
	@$(CC) $(CFLAGS) $? -o $@
	@echo "Derleme tamalandı."
	
src/sort_base.c:
	@echo "sort_base.c dosyası bulunamadı. Git ile tekrar klonlayın."

src/sort_algorithm.c:
	@echo "sort_algorithm.c dosyası bulunamadı. Git ile tekrar klonlayın."

headers/sort_base.h:
	@echo "sort_base.h dosyası bulunamadı. Git ile tekrar klonlayın."

