SRC=src
CHALLENGES=challenges
OUT=dist/main

basic:
	@gcc $(SRC)/basic/main.c -o $(OUT) && $(OUT)
enum:
	@gcc $(SRC)/enum/main.c -o $(OUT) && $(OUT)
format-specifier:
	@gcc $(SRC)/format-specifier/main.c -o $(OUT) && $(OUT)
terminal-input:
	@gcc $(SRC)/terminal-input/main.c -o $(OUT) && $(OUT)

# Challenges
rectangle:
	@gcc $(CHALLENGES)/rectangle/main.c -o $(OUT) && $(OUT)

 
clean:
	rm -r $(TARGET)