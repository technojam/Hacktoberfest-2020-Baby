def count_character(string,target):
     count=0
     for character in string:
         if character == target:
             count = count + 1
     return count

print("Should print a count of 3:")
print(count_character("oxen and foxen all live in boxen", "x"))

print("Should print a count of 0:")
print(count_character("that letter isn't here", "x"))

print("Should print a count of 9:")
print(count_character("the goofy doom of the balloon goons", "o"))

print("Should print a count of 6:")
print(count_character("papa pony and the parcel post problem", "p"))

print("Should print a count of 0:")
print(count_character("this bunch of words has no", "e"))

# using while loop
def count_character(string, target):
    index = 0
    total = 0
    while index < len(string):
        if string[index] == target:
            total += 1
        index += 1
    return total
string="'bononobs"
target="o"
print(count_character(string,target))
