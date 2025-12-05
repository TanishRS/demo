import random

print("Welcome to Snake and Ladder!")
print("Reach 100 to win the game.\n")

position = 0 

snakes = {17:7, 23:18, 36:4, 45:22, 57:16, 65:9, 79:41, 88:27, 91:56, 99:1}
ladders = {3:22, 5:8, 11:26, 20:29, 27:56, 40:59, 44:79, 54:88}


while position < 100:
    input("Press Enter to roll the dice: ")

    dice = random.randint(1, 6)
    print("You rolled:", dice)

    position = position + dice
    print("You moved to:", position)

    if position > 100:
        print("You need exact number to reach 100.\n")
        position -= dice
        continue

    if position in snakes:
        print("Oh no! You got bit by the Snake!")
        position = snakes[position]
        print("You slid down to:", position)

    if position in ladders:
        print("Yay! You climbed the ladder!")
        position = ladders[position]
        print("You climbed up to:", position)
    print()

print("Congratulations! You reached 100 and won the game!")