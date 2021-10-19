
from tkinter import *

class Application(Frame):
    """ GUI Application for a simple calculator. """
    def __init__(self, master):
        super(Application, self).__init__(master)  
        self.grid()
        # Create the widgets
        self.create_widgets()
        
 
    def create_widgets(self):
        """ Create widgets for the interface. """
#===========================Text box================================================================================
        
        self.display_str = " "
        self.entry = Text(self,font = ('sans - serif',15),height = 2, width = 35, borderwidth = 2, bg = 'light blue', fg = 'black')
        self.entry.grid(row = 0, column = 0, columnspan = 4, sticky = EW, padx = 5, pady = 5)
        self.entry.tag_config("right_align",justify = "right")
        
                          
#========================================ROW_1======================================================================

        # Button for 7
        Button(self, text = "7", height = 2, width = 5, font =('Sans -serif',15),command = self.clicked_7
              ).grid(row = 1, column = 0, sticky = NSEW, padx = 5, pady = 5)

        # Button for 8
        Button(self, text = "8", height = 2, width = 5, font =('Sans -serif',15), command = self.clicked_8
              ).grid(row = 1, column = 1, sticky = NSEW, padx = 5, pady = 5)

        # Button for 9
        Button(self, text = "9", height = 2, width = 5, font =('Sans -serif',15), command = self.clicked_9
              ).grid(row = 1, column = 2, sticky = NSEW, padx = 5, pady = 5)

         # Button for "+"
        Button(self, text = "+", height = 2, width = 5, font =('Sans -serif',15), command = self.clicked_plus
              ).grid(row = 1, column = 3, sticky = NSEW, padx = 5, pady = 5)

#=======================================ROW_2=======================================================================
        
        # Button for 4
        Button(self, text = "4", height = 2, width = 5, font =('Sans -serif',15), command = self.clicked_4
              ).grid(row = 2, column = 0, sticky = NSEW, padx = 5, pady = 5)


         # Button for 5
        Button(self, text = "5", height = 2, width = 5, font =('Sans -serif',15), command = self.clicked_5
              ).grid(row = 2, column = 1, sticky = NSEW, padx = 5, pady = 5)

        # Button for 6
        Button(self, text = "6", height = 2, width = 5, font =('Sans -serif',15), command = self.clicked_6
              ).grid(row = 2, column = 2, sticky = NSEW, padx = 5, pady = 5)

        
         # Button for "-"
        Button(self, text = "-", height = 2, width = 5, font =('Sans -serif',15), command = self.clicked_minus
              ).grid(row = 2, column = 3, sticky = NSEW, padx = 5, pady = 5)

#=========================================ROW_3==================================================================
        
        # Button for 1
        Button(self, text = "1", height = 2, width = 5, font =('Sans -serif',15), command = self.clicked_1
              ).grid(row = 3, column = 0, sticky = NSEW, padx = 5, pady = 5)

        # Button for 2
        Button(self, text = "2", height = 2, width = 5, font =('Sans -serif',15), command = self.clicked_2
              ).grid(row = 3, column = 1, sticky = NSEW, padx = 5, pady = 5)

         # Button for 3
        Button(self, text = "3", height = 2, width = 5, font =('Sans -serif',15), command = self.clicked_3
              ).grid(row = 3, column = 2, sticky = NSEW, padx = 5, pady = 5)

         # Button for "×"
        Button(self, text = "×", height = 2, width = 5, font =('Sans -serif',15), command = self.clicked_multiply
              ).grid(row = 3, column = 3, sticky = NSEW, padx = 5, pady = 5)


#======================================ROW_4=========================================================================
        
        # Button for "CLR"
        Button(self, text = "CLR", height = 2, width = 5, font =('Sans -serif',15), command = self.clicked_CLR
              ).grid(row = 5, column = 0, sticky = NSEW, padx = 7, pady = 7)

        # Button for 0
        Button(self, text = "0", height = 2, width = 5, font =('Sans -serif',15), command = self.clicked_0
              ).grid(row = 5, column = 1, sticky = NSEW, padx = 5, pady = 5)

         # Button for "÷"
        Button(self, text = "÷", height = 2, width = 5, font =('Sans -serif',15), command = self.clicked_divide
              ).grid(row = 5, column = 2, sticky = NSEW, padx = 5, pady = 5)


        # Button for "="
        Button(self, text = "=", height = 2, width = 5, font =('Sans -serif',15), command = self.clicked_equal
              ).grid(row = 4, column = 3, rowspan = 2, sticky = NSEW, padx = 5, pady = 5)

#=================== Command clicking by button ===========================================================================

    def clicked_7(self):
        self.display_str +="7"
        try:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, self.display_str, "right_align")
        except:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, "Error!", "right_align")
            
    def clicked_8(self):
        self.display_str +="8"
        try:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, self.display_str, "right_align")
        except:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, "Error!", "right_align")

    def clicked_9(self):
        self.display_str +="9"
        try:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, self.display_str, "right_align")
        except:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, "Error!", "right_align")

    def clicked_plus(self):
        self.display_str +="+"
        try:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, self.display_str, "right_align")
        except:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, "Error!", "right_align")
            

    def clicked_4(self):
        self.display_str +="4"
        try:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, self.display_str, "right_align")
        except:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, "Error!", "right_align")
            

    def clicked_5(self):
        self.display_str +="5"
        try:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, self.display_str, "right_align")
        except:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, "Error!", "right_align")

    def clicked_6(self):
        self.display_str +="6"
        try:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, self.display_str, "right_align")
        except:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, "Error!", "right_align")
            
    def clicked_minus(self):
        self.display_str +="-"
        try:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, self.display_str, "right_align")
        except:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, "Error!", "right_align")

    def clicked_1(self):
        self.display_str +="1"
        try:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, self.display_str, "right_align")
        except:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, "Error!", "right_align")    

    def clicked_2(self):
        self.display_str +="2"
        try:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, self.display_str, "right_align")
        except:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, "Error!", "right_align")
            
    
    def clicked_3(self):
        self.display_str +="3"
        try:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, self.display_str, "right_align")
        except:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, "Error!", "right_align")

    def clicked_multiply(self):
        self.display_str +="*"
        try:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, self.display_str, "right_align")
        except:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, "Error!", "right_align")

    def clicked_CLR(self):

        self.entry.delete(0.0,END)
        self.display_str = " "
    

    def clicked_0(self):
        self.display_str +="0"
        try:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, self.display_str, "right_align")
        except:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, "Error!", "right_align")

            
    def clicked_divide(self):
        self.display_str +="/"
        try:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, self.display_str, "right_align")
        except:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, "Error!", "right_align")

    
    def clicked_equal(self): 
        value = self.entry.get("1.0",END)
        
        try:
            answer = eval(value)
            self.display_str = str(answer)
            self.entry.delete(0.0, END)
            self.entry.insert(0.0,self.display_str, "right_align")   
        except:
            self.entry.delete(0.0, END)
            self.entry.insert(0.0, "Error!", "right_align")

    
    
        
# main
root = Tk()
root.title("Simple Calculator")
app = Application(root)
root.mainloop()
