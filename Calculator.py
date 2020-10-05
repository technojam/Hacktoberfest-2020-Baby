import tkinter
from tkinter import*
from tkinter import messagebox



# Setting Tkinter Window
root = tkinter.Tk()
root.geometry("350x450+300+300")
root.resizable(0,0)
root.title("Calculator")

A = ""
operator = ""
B = 0



# function defining
def btn1_pressed():
    global A
    A = A + "1"
    data.set(A)

def btn2_pressed():
    global A
    A = A + "2"
    data.set(A)

def btn3_pressed():
    global A
    A = A + "3"
    data.set(A)

def btn4_pressed():
    global A
    A = A + "4"
    data.set(A)

def btn5_pressed():
    global A
    A = A + "5"
    data.set(A)

def btn6_pressed():
    global A
    A = A + "6"
    data.set(A)

def btn7_pressed():
    global A
    A = A + "7"
    data.set(A)

def btn8_pressed():
    global A
    A = A + "8"
    data.set(A)

def btn9_pressed():
    global A
    A = A + "9"
    data.set(A)

def btn0_pressed():
    global A
    A = A + "0"
    data.set(A)

def btnadd_pressed():
    global A, B, operator
    B = int(A)
    operator = "+"
    A = A + "+"
    data.set(A)

def btnmin_pressed():
    global A,B, operator
    B = int(A)
    operator = "-"
    A = A + "-"
    data.set(A)

def btnmul_pressed():
    global A, B, operator
    B = int(A)
    operator = "*"
    A = A + "*"
    data.set(A)

def btndiv_pressed():
    global A, B, operator
    B = int(A)
    operator = "/"
    A = A + "/"
    data.set(A)

def btnC_pressed():
    global A,B,operator
    A = ""
    data.set(A)

def result():
    global A, B, operator
    val = A
    if operator == "+":
        x = int(val.split("+")[1])
        y = B + x
        A = str(y)
        data.set(A)

    if operator == "-":
        x = int(val.split("-")[1])
        y = B - x
        A = str(y)
        data.set(A)

    if operator == "*":
        x = int(val.split("*")[1])
        y = B * x
        A = str(y)
        data.set(A)

    if operator == "/":
        x = int(val.split("/")[1])
        if x == 0:
            messagebox.showerror("Error,Divison by '0' not supported!")
            A = ""
            B = ""
            data.set(A)
        else:
            y = float(B / x)
            A = str(y)
            data.set(A)



# Label for Result
data = StringVar()
lbl = Label(
    root,
    text = "Label",
    anchor = SE,
    textvariable = data,
    font = ("Verdana", 20),
    background = "#bfbfff",
    fg = "#000000"
)
lbl.pack(expand = True, fill = "both")





# Frame setting
btnrow1 = Frame(root)
btnrow1.pack(expand = True, fill = "both")

btnrow2 = Frame(root)
btnrow2.pack(expand = True, fill = "both")

btnrow3 = Frame(root)
btnrow3.pack(expand = True, fill = "both")

btnrow4 = Frame(root)
btnrow4.pack(expand = True, fill = "both")




# Setting up Buttons
# Buttons for frame 1:
btn1 = Button(
    btnrow1,
    text = "1",
    font = ("Verdana", 22),
    background = "#ad8dfc",
    relief = GROOVE,
    border = 0,
    command = btn1_pressed
)
btn1.pack(side = LEFT, expand = True, fill = "both")

btn2 = Button(
    btnrow1,
    text = "2",
    font = ("Verdana", 22),
    background = "#ad8dfc",
    relief = GROOVE,
    border = 0,
    command = btn2_pressed
)
btn2.pack(side = LEFT, expand = True, fill = "both")

btn3 = Button(
    btnrow1,
    text = "3",
    font = ("Verdana", 22),
    background = "#ad8dfc",
    relief = GROOVE,
    border = 0,
    command = btn3_pressed
)
btn3.pack(side = LEFT, expand = True, fill = "both")

btn4 = Button(
    btnrow2,
    text = "4",
    font = ("Verdana", 22),
    background = "#ad8dfc",
    relief = GROOVE,
    border = 0,
    command = btn4_pressed
)
btn4.pack(side = LEFT, expand = True, fill = "both")


# Buttons for frame2:
btn5 = Button(
    btnrow2,
    text = "5",
    font = ("Verdana", 22),
    background = "#ad8dfc",
    relief = GROOVE,
    border = 0,
    command = btn5_pressed
)
btn5.pack(side = LEFT, expand = True, fill = "both")

btn6 = Button(
    btnrow2,
    text = "6",
    font = ("Verdana", 22),
    background = "#ad8dfc",
    relief = GROOVE,
    border = 0,
    command = btn6_pressed
)
btn6.pack(side = LEFT, expand = True, fill = "both")

btn7 = Button(
    btnrow3,
    text = "7",
    font = ("Verdana", 22),
    background = "#ad8dfc",
    relief = GROOVE,
    border = 0,
    command = btn7_pressed
)
btn7.pack(side = LEFT, expand = True, fill = "both")

btn8 = Button(
    btnrow3,
    text = "8",
    font = ("Verdana", 22),
    background = "#ad8dfc",
    relief = GROOVE,
    border = 0,
    command = btn8_pressed
)
btn8.pack(side = LEFT, expand = True, fill = "both")

# Buttons for frame 3:
btn9 = Button(
    btnrow3,
    text = "9",
    font = ("Verdana", 22),
    background = "#ad8dfc",
    relief = GROOVE,
    border = 0,
    command = btn9_pressed
)
btn9.pack(side = LEFT, expand = True, fill = "both")

btnadd = Button(
    btnrow1,
    text = "+",
    font = ("Verdana", 22),
    background = "#ad8dfc",
    relief = GROOVE,
    border = 0,
    command = btnadd_pressed
)
btnadd.pack(side = LEFT, expand = True, fill = "both")

btnmin = Button(
    btnrow2,
    text = "-",
    font = ("Verdana", 22),
    background = "#ad8dfc",
    relief = GROOVE,
    border = 0,
    command = btnmin_pressed
)
btnmin.pack(side = LEFT, expand = True, fill = "both")

# Buttons for Frame 4:
btnmul = Button(
    btnrow3,
    text = "*",
    font = ("Verdana", 22),
    background = "#ad8dfc",
    relief = GROOVE,
    border = 0,
    command = btnmul_pressed
)
btnmul.pack(side = LEFT, expand = True, fill = "both")

btnC = Button(
    btnrow4,
    text = "C",
    font = ("Verdana", 22),
    background = "#ad8dfc",
    relief = GROOVE,
    border = 0,
    command = btnC_pressed
)
btnC.pack(side = LEFT, expand = True, fill = "both")

btn0 = Button(
    btnrow4,
    text = "0",
    font = ("Verdana", 22),
    background = "#ad8dfc",
    relief = GROOVE,
    border = 0,
    command = btn0_pressed
)
btn0.pack(side = LEFT, expand = True, fill = "both")

btnres = Button(
    btnrow4,
    text = "=",
    font = ("Verdana", 22),
    background = "#ad8dfc",
    relief = GROOVE,
    border = 0,
    command = result
)
btnres.pack(side = LEFT, expand = True, fill = "both")

btndiv = Button(
    btnrow4,
    text = "/",
    font = ("Verdana", 22),
    background = "#ad8dfc",
    relief = GROOVE,
    border = 0,
    command = btndiv_pressed
)
btndiv.pack(side = LEFT, expand = True, fill = "both")

lbl2 = Label(
    root,
    text = "Avneesh Pathak ver_1.O",
    anchor = SE,
    font = ("Verdana", 10),
    background = "#e27aff",
    fg = "#000000",
)
lbl2.pack(fill = "both")

root.mainloop()