

CC = gcc
BUILD_DIR = build

EXE += print_square_matrix
EXE += print_revers_arrey
EXE += print_bin_matrix
EXE += print_snail_matrix

all: $(BUILD_DIR) $(EXE)

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

print_square_matrix: print_square_matrix.c
	$(CC) $< -o $(BUILD_DIR)/$@

print_revers_arrey: print_revers_arrey.c
	$(CC) $< -o $(BUILD_DIR)/$@

print_bin_matrix: print_bin_matrix.c
	$(CC) $< -o $(BUILD_DIR)/$@

print_snail_matrix: print_snail_matrix.c
	$(CC) $< -o $(BUILD_DIR)/$@

clean:
	rm -r $(BUILD_DIR)
