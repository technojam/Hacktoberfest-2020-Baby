#First we will create a function which we can call it later in this program
def validate(hand):
  if hand <0 or hand >2:
    return False
  return True
  
  
def print_hand(hand, name='Guest'):
  hand = ['Rock', 'Paper', 'Scissors']
  print(name + ' picked: ' + hands[hand])
  
  
  
#Now we will define the judge function
def judge(player, computer):
    #Now we'll be adding control flow based on the comparison of player and computer
    if player == computer:
        return ("Draw")
    elif player == 0 and computer == 1:
        return ("Lose")
    elif player == 1 and computer == 2:
        return ("Lose")
    elif player == 2 and computer == 3:
        return ("Lose")
    else:
        return ("Win")


print('Starting the Rock Paper Scissors game!')
player_name = input('Please enter your name: ')

print('Pick a hand: (0: Rock, 1: Paper, 2: Scissors)')
player_hand = int(input('Please enter a number (0-2): '))
