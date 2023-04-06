import random

options = ["rock", "paper", "scissors"]
user_score = 0
computer_score = 0

while True:
    # Get user input
    user_choice = input("Enter rock, paper, or scissors: ").lower()

    # Check for valid input
    if user_choice not in options:
        print("Invalid input, please try again.")
        continue

    # Generate computer choice
    computer_choice = random.choice(options)
    print("Computer chose", computer_choice)

    # Determine winner
    if user_choice == computer_choice:
        print("Tie!")
    elif (user_choice == "rock" and computer_choice == "scissors") or \
         (user_choice == "paper" and computer_choice == "rock") or \
         (user_choice == "scissors" and computer_choice == "paper"):
        print("You win!")
        user_score += 1
    else:
        print("Computer wins!")
        computer_score += 1

    # Print scores
    print("Your score:", user_score)
    print("Computer score:", computer_score)

    # Ask to play again
    play_again = input("Do you want to play again? (y/n): ").lower()
    if play_again != "y":
        break

print("Thanks for playing!")

