import time
import random


def print_pause(msg_to_print):
    print(msg_to_print)
    time.sleep(2)


def intro(item, option):
    print_pause("You find yourself standing in an open field, filled "
                "with grass and yellow wildflowers.\n")
    print_pause("Rumor has it that a " + option + " is somewhere around "
                "here, and has been terrifying the nearby village.\n")
    print_pause("In front of you is a house.\n")
    print_pause("To your right is a dark cave.\n")
    print_pause("In your hand you hold your trusty (but not very "
                "effective) dagger.\n")


def cave(item, option):
    if "sword" in item:
        print_pause("\nYou peer cautiously into the cave.")
        print_pause("\nYou've been here before, and gotten all"
                    " the good stuff. It's just an empty cave"
                    " now.")
        print_pause("\nYou walk back to the field.\n")
    else:
        print_pause("\nYou peer cautiously into the cave.")
        print_pause("\nIt turns out to be only a very small cave.")
        print_pause("\nYour eye catches a glint of metal behind a "
                    "rock.")
        print_pause("\nYou have found the magical Sword of Ogoroth!")
        print_pause("\nYou discard your silly old dagger and take "
                    "the sword with you.")
        print_pause("\nYou walk back out to the field.\n")
        item.append("sword")
    field(item, option)


def house(item, option):
    print_pause("\nYou approach the door of the house.")
    print_pause("\nYou are about to knock when the door "
                "opens and out steps a " + option + ".")
    print_pause("\nEep! This is the " + option + "'s house!")
    print_pause("\nThe " + option + " attacks you!\n")
    if "sword" not in item:
        print_pause("You feel a bit under-prepared for this, "
                    "what with only having a tiny dagger.\n")
    while True:
        choice2 = input("Would you like to (1) fight or (2) "
                        "run away?")
        if choice2 == "1":
            if "sword" in item:
                print_pause("\nAs the " + option + " moves to attack, "
                            "you unsheath your new sword.")
                print_pause("\nThe Sword of Ogoroth shines brightly in "
                            "your hand as you brace yourself for the "
                            "attack.")
                print_pause("\nBut the " + option + "takes one look at "
                            "your shiny new toy and runs away!")
                print_pause("\nYou have rid the town of the " + option +
                            ". You are victorious!\n")
            else:
                print_pause("\nYou do your best...")
                print_pause("but your dagger is no match for the "
                            + option + ".")
                print_pause("\nYou have been defeated!\n")
            play_again()
            break
        if choice2 == "2":
            print_pause("\nYou run back into the field. "
                        "\nLuckily, you don't seem to have been "
                        "followed.\n")
            field(item, option)
            break


def field(item, option):
    print_pause("Enter 1 to knock on the door of the house.")
    print_pause("Enter 2 to peer into the cave.")
    print_pause("What would you like to do?")
    while True:
        choice1 = input("(Please enter 1 or 2.)\n")
        if choice1 == "1":
            house(item, option)
            break
        elif choice1 == "2":
            cave(item, option)
            break


def play_again():
    again = input("Would you like to play again? (y/n)").lower()
    if again == "y":
        print_pause("\n\n\nExcellent! Restarting the game ...\n\n\n")
        play_game()
    elif again == "n":
        print_pause("\n\n\nThanks for playing! See you next time.\n\n\n")
    else:
        play_again()


def play_game():
    item = []
    option = random.choice(["wicked fairie", "pirate", "dragon", "troll",
                            "gorgon"])
    intro(item, option)
    field(item, option)


play_game()
