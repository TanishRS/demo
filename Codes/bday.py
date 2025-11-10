import random

num_people = 10

num_trials = 10000

same_birthday_count = 0

for trial in range(num_trials):
    birthdays = []
    
    for _ in range(num_people):
        day = random.randint(1, 365)
        birthdays.append(day)
    
    if len(birthdays) != len(set(birthdays)):
        same_birthday_count += 1

probability = same_birthday_count / num_trials

print(f"Out of {num_trials} simulations, {same_birthday_count} had at least two people sharing a birthday.")
print(f"Estimated Probability: {probability:.4f}")