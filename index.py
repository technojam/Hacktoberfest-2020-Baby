import os

def test():
    os.chdir("D:/Users/Files")
    files = os.listdir(".")
    for x in files:
        with open(x, "r") as inputFile:
            content = inputFile.read()
        with open(x, "wb") as outputFile:
            outputFile.write(content.upper())
