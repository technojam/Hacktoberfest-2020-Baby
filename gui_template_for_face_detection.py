import tkinter
from tkinter import *
from tkinter import messagebox

top = Tk()
top.geometry("800x300")

def helloCallBack():
    msg = messagebox.showinfo(" Face Detected ", " Hello User ")

C = Canvas(top, bg ="gray100", height = 300 , width = 800)



Rect1 = C.create_rectangle(0,0,800,50,fill="grey1")
Rect2 = C.create_rectangle(0,0,300,50,fill="orchid4")



C.create_text(150,25,fill="gray100",font="Helvetica 16 bold",
                        text="<PROJECT NAME HERE>")
   
B = Button(top, text = 'HOME', command = helloCallBack, relief=FLAT, width = 14)
B.place(x=320,y=15)
B = Button(top, text = 'CONTACT', command = helloCallBack, relief=FLAT, width = 14)
B.place(x=440,y=15)
B = Button(top, text = 'ABOUT', command = helloCallBack, relief=FLAT, width = 14)
B.place(x=560,y=15)
B = Button(top, text = 'REGISTER HERE', command = helloCallBack, relief=FLAT, width = 14)
B.place(x=680,y=15)



B = Button(top, text = 'CLICK FOR VIDEO', command = helloCallBack,height = 5, width = 30,bg = "mediumseagreen",fg="grey100")
B.place(x=445,y=125)
B = Button(top, text = 'CLICK FOR IMAGE DETECTION', command = helloCallBack,height = 5, width = 30,bg = "cyan4",fg="grey100")
B.place(x=170,y=125)




C.pack()
top.mainloop()
