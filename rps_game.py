# Simple Game of Rock, Paper, Scissors...

p1 = input("Player 1, select 'rock', 'paper' or 'scissors': ")
p2 = input("Player 2, select 'rock', 'paper' or 'scissors': ")

if p1 == p2:
    print("It's a tie!")
elif p1 == "rock":
    if p2 == "scissors":
        print("player 1 wins!")
    elif p2 == "paper":
        print("player 2 wins!")
elif p1 == "paper":
    if p2 == "rock":
        print("player 1 wins!")
    elif p2 == "scissors":
        print("player 2 wins!")
elif p1 == "scissors":
    if p2 == "paper":
        print("player 1 wins!")
    elif p2 == "rock":
        print("player 2 wins!")
else:
    print("Error! Retry...")
