print("Welcome to WordListGenerator - My Pull Request for Hacktober Fest! Feel Free TO make changes\n")

""" This script is used to create a wordlist file within seconds to create password lists for cracking.
I have implemented a menu driven code. Feel Feel To make changes and abide by the PEP-8 Guidelines"""

try:
    #List Containing operation codes
    operations = []

    #List Containing valid operations
    valid_operations = [1, 2, 3]

    # Menu Driven Code
    loop_flag = 'y'

    while (loop_flag == 'y' or loop_flag == 'Y'):
        choice = int(input("1. Append\n2. Prepend\n3. UpperCase\nEnter Your Choice: "))
        operations.append(choice)
        loop_flag = input("Do you want to add more operations?(Y/N): ")
    
    # Checking if operations entered by user are valid
    for i in operations:
        if i not in valid_operations:
            print("Invalid Option! Exiting.....")
            exit()

    #Takes in keyword and start-end bounds
    keyword = input("Enter The Keyword: ")
    start = int(input("Enter The Start Number: "))
    end = int(input("Enter The End Number: "))
 
    seedkeywords = []
    seedkeywords.append(keyword)

    if 3 in operations:
        seedkeywords.append(keyword.upper())

    # Runs if user wants to append Numbers
    if 1 in operations:
        for word in seedkeywords:
            f = open(f'{keyword}.txt', 'a')
            for i in range(start, end+1):
                f.write(f"{word}{str(i)}\n")
            f.close()
            print(f'{keyword}.txt Created!')
        
    # Runs if user wants to prepend Numbers
    if 2 in operations:
        for word in seedkeywords:
            f = open(f'{keyword}.txt', 'a')
            for i in range(start, end+1):
                f.write(f"{str(i)}{word}\n")
            f.close()
            print(f'{keyword}.txt Created!')

except:
    print("Invalid Input! Exiting.....")
