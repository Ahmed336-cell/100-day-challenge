import tkinter
from textblob import TextBlob
from tkinter import *

root= Tk()
root.title("Spelling checker")
root.geometry("700x400")
root.config(background="#dae6f6")
global spell
def check_spelling():
    word=enter_txt.get()
    a=TextBlob(word)
    right=str(a.correct())
    cs=Label(root,text="Correct text is : ",font=("poppins",20),bg="#dae6f6",fg="#364971")
    cs.place(x=100,y=250)
    spell.config(text=right)

heading=Label(root,text="Spelling checker",font=("Trebuchet MS",30,"bold"),bg="#dae6f6",fg="#364971")
heading.pack(pady=(50,0))
enter_txt=Entry(root,justify="center",width=30,font=("poppins",25),bg="white",border=2)
enter_txt.pack(pady=10)
enter_txt.focus()





button=Button(root,text="Check",font=("arial",20,"bold"),fg="white",bg="red",command=check_spelling)
button.pack()
spell = Label(root,font=("poppins",20),bg="#dae6f6",fg="#364971")
spell.place(x=350,y=250)



root.mainloop()
